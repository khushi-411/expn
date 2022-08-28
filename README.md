# Generalized exponential integral *En*

I worked on this function during my Google Summer of Code internship.
Relevant PR: https://github.com/cupy/cupy/pull/6790.

The expression for `expn` is defined by:

<p align="center">
      <img src = "/extras/expn.png">
</p>

*Note*: n ≥ 0 and real x ≥ 0.

More about `expn` in CuPy Documentation: https://docs.cupy.dev/en/stable/reference/generated/cupyx.scipy.special.expn.html#cupyx.scipy.special.expn

**Key Notes:**

- The function `expn` defined here is numerically stable and all the
features are tested using GoogleTests.
- In CuPy this function is implemented by calling `ufuncs`
for speedy implementation in GPU.
- We achieved nearly 40x times faster results in CuPy.
- Intiliatty, in the CuPy loop unrolling technique,
was used in the `polevl` definition for compile-time optimization
to get better speed. But we changed
the implementation with a runtime argument as required by the function.

### Acknowledgement

Thanks to my mentor [Masayuki Takagi](https://github.com/takagi) for his guidance,
for reviewing my work, and for giving valuable suggestions in PR.
