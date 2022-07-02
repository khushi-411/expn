#pragma once

#define EUL 0.57721566490153286060
#define BIG 1.44115188075855872E+17
#define MACHEP 1.11022302462515654042E-16
#define MAXLOG 7.08396418532264106224E2

static const int nA = 13;

static const double A0[] = {
    1.00000000000000000
};

static const double A1[] = {
    1.00000000000000000
};

static const double A2[] = {
    -2.00000000000000000,
    1.00000000000000000
};

static const double A3[] = {
    6.00000000000000000,
    -8.00000000000000000,
    1.00000000000000000
};

static const double A4[] = {
    -24.0000000000000000,
    58.0000000000000000,
    -22.0000000000000000,
    1.00000000000000000
};

static const double A5[] = {
    120.000000000000000,
    -444.000000000000000,
    328.000000000000000,
    -52.0000000000000000,
    1.00000000000000000
};

static const double A6[] = {
    -720.000000000000000,
    3708.00000000000000,
    -4400.00000000000000,
    1452.00000000000000,
    -114.000000000000000,
    1.00000000000000000
};

static const double A7[] = {
    5040.00000000000000,
    -33984.0000000000000,
    58140.0000000000000,
    -32120.0000000000000,
    5610.00000000000000,
    -240.000000000000000,
    1.00000000000000000
};

static const double A8[] = {
    -40320.0000000000000,
    341136.000000000000,
    -785304.000000000000,
    644020.000000000000,
    -195800.000000000000,
    19950.0000000000000,
    -494.000000000000000,
    1.00000000000000000
};

static const double A9[] = {
    362880.000000000000,
    -3733920.00000000000,
    11026296.0000000000,
    -12440064.0000000000,
    5765500.00000000000,
    -1062500.00000000000,
    67260.0000000000000,
    -1004.00000000000000,
    1.00000000000000000
};

static const double A10[] = {
    -3628800.00000000000,
    44339040.0000000000,
    -162186912.000000000,
    238904904.000000000,
    -155357384.000000000,
    44765000.0000000000,
    -5326160.00000000000,
    218848.000000000000,
    -2026.00000000000000,
    1.00000000000000000
};

static const double A11[] = {
    39916800.0000000000,
    -568356480.000000000,
    2507481216.00000000,
    -4642163952.00000000,
    4002695088.00000000,
    -1648384304.00000000,
    314369720.000000000,
    -25243904.0000000000,
    695038.000000000000,
    -4072.00000000000000,
    1.00000000000000000
};

static const double A12[] = {
    -479001600.000000000,
    7827719040.00000000,
    -40788301824.0000000,
    92199790224.0000000,
    -101180433024.000000,
    56041398784.0000000,
    -15548960784.0000000,
    2051482776.00000000,
    -114876376.000000000,
    2170626.00000000000,
    -8166.00000000000000,
    1.00000000000000000
};

static const double *A[] = {
    A0, A1, A2,
    A3, A4, A5,
    A6, A7, A8,
    A9, A10, A11,
    A12
};

static const int Adegs[] = {
    0, 0, 1,
    2, 3, 4,
    5, 6, 7,
    8, 9, 10,
    11
};
