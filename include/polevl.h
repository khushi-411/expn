#ifndef INCLUDE_POLEVL_HPP
#define INCLUDE_POLEVL_HPP


#include <iostream>
#include <cmath>


double polevl(double x, const double coef[], int N) {
    double ans;
    const double *p;

    p = coef;
    ans = *p++;

    // y = a * x_i + b
    for (int i = 0; i < N; i++) {
        ans = ans * x + *p++;
    }

    return ans;
}


#endif // INCLUDE_POLEVL_HPP
