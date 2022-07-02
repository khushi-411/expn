#ifndef INCLUDE_EXPN_HPP
#define INCLUDE_EXPN_HPP


#include <iostream>
#include <cmath>

#include "constants.h"
#include "expn_large_n.h"
#include "gamma.h"
#include "polevl.h"


double expn(int n, double x) {

    double ans, r, t, yk, xk;
    double pk, pkm1, pkm2, qk, qkm1, qkm2;
    double psi, z;
    int i, k;
    double big = BIG;

    if (std::isnan(x)) {
        return nan(""); // std::nan(x);
    } else if (n < 0 || x < 0) {
        return nan(""); // std::nan(x);
    }

    if (x > MAXLOG) {
        return 0.0;
    }

    if (x == 0.0) {
        if (n < 2) {
            return 1.0 / 0.0;
        } else {
            return (1.0 / (n - 1.0));
        }
    }

    if (n == 0) {
        return (exp(-x) / x);
    }

    /* Asymptotic expansion for large n */
    if (n > 50) {
        ans = expn_large_n(n, x);
        return (ans);
    }

    /* Continued fraction */
    if (x > 1.0) {
        k = 1;
        pkm2 = 1.0;
        qkm2 = x;
        pkm1 = 1.0;
        qkm1 = x + n;
        ans = pkm1 / qkm1;

        do {
            k += 1;
            if (k & 1) {
                yk = 1.0;
                xk = n + (k - 1) / 2;
            } else {
                yk = x;
                xk = k / 2;
            }
            pk = pkm1 * yk + pkm2 * xk;
	        qk = qkm1 * yk + qkm2 * xk;
	        if (qk != 0) {
	            r = pk / qk;
	            t = fabs((ans - r) / r);
	            ans = r;
	        } else {
	            t = 1.0;
	        }
	        pkm2 = pkm1;
	        pkm1 = pk;
	        qkm2 = qkm1;
	        qkm1 = qk;
	        if (fabs(pk) > big) {
	            pkm2 /= big;
	            pkm1 /= big;
	            qkm2 /= big;
	            qkm1 /= big;
	        }
        } while (t > MACHEP);

        ans *= exp(-x);
    }

    /* Power series expansion */
    psi = -EUL - log(x);
    for (i = 1; i < n; i++) {
        psi = psi + 1.0 / i;
    }

    z = -x;
    xk = 0.0;
    yk = 1.0;
    pk = 1.0 - n;
    if (n == 1) {
        ans = 0.0;
    } else {
        ans = 1.0 / pk;
    }
    do {
        xk += 1.0;
	    yk *= z / xk;
	    pk += 1.0;
	    if (pk != 0.0) {
	        ans += yk / pk;
	    }
	    if (ans != 0.0)
	        t = std::fabs(yk / ans);
	    else
	        t = 1.0;
    } while (t > MACHEP);
    k = xk;
    t = n;
    r = n - 1;
    ans = (std::pow(z, r) * psi / gamma(t)) - ans;
    return (ans);

}


#endif // end INCLUDA_EXPN_HPP
