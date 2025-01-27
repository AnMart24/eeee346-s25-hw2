#ifndef QUADRATIC_H__ // header guard: to avoid the problem of multiple inclusion
#define QUADRATIC_H__

/**
 * Compute the value of a quadratic
 *
 * @param x - input
 * @param a - coefficient a
 * @param b - coefficient b
 * @param c - coefficient c
 * @return y(x) = ax^2 + bx + c
 */
double myQuad(double x, double a, double b, double c);

/**
 * Compute the value of the derivative of a quadratic
 *
 * @param x - input
 * @param a - coefficient a
 * @param b - coefficient b
 * @return y'(x) = 2ax + b
 */
double myQuadPrime(double x, double a, double b);

#endif
