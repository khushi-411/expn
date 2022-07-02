#ifndef INCLUDE_GAMMA_HPP
#define INCLUDE_GAMMA_HPP


#include <iostream>
#include <cmath>


double gamma(double in0) {
    
    double out0;
    
    if (std::isinf(in0) && in0 < 0) {
        out0 = -1.0 / 0.0;
    } else if (in0 < 0. && in0 == std::floor(in0)) {
        out0 = 1.0 / 0.0;
    } else {
        out0 = tgamma(in0);
    }

    return out0;
}


#endif // INCLUDE_GAMMA_HPP
