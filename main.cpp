#include <iostream>
#include <cmath>

#include "include/expn.h"

int main() {

    double k[] = {13, 12, 4, 4};
    int a = 11;

    std::cout << expn(a, *k) << std::endl;

    return 0;
}
