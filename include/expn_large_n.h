#ifndef INCLUDE_EXPN_LARGE_HPP
#define INCLUDE_EXPN_LARGE_HPP


#include <iostream>
#include <cmath>

#include "constants.h"
#include "polevl.h"

double expn_large_n(int n, double x) {

    int k;
    double p = n;
    double lambda = x / p;
    double multiplier = 1 / p / (lambda + 1) / (lambda + 1);
    double fac = 1;
    double res = 1;
    double expfac, term;

    expfac = std::exp(-lambda * p) / (lambda + 1) / p;

    if (expfac == 0) {
        return 0;
    }

    /* Do the k = 1 term outside the loop since A[1] = 1 */
    fac *= multiplier;
    res += fac;

    for (k = 2; k < nA; k++) {
        fac *= multiplier;
        term = fac * polevl(lambda, A[k], Adegs[k]);
        res += term;
        if (std::fabs(term) < MACHEP * std::fabs(res)) {
            break;
        }
    }

    return expfac * res;
}


#endif // INCLUDE_EXPN_LARGE_HPP
