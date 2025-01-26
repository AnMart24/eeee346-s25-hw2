#ifndef NEWTON_H__ // header guard: to avoid the problem of double inclusion
#define NEWTON_H__

/**
 * Absolute difference threshold to trigger stop of Newton's method iterations
 */
const double THRESHOLD = 0.0001;

/**
 * Max number of iterations to stop Newton's method
 */
const int MAX_ITERS = 100;

/**
 * Newton's method on a quadratic equation
 *
 * @param guess - starting point guess for a root
 * @param a - quadratic coefficient a
 * @param b - quadratic coefficient b
 * @param c - quadratic coefficient c
 */
void newtonRaphsonQuad(double guess, double a, double b, double c);

/**
 * Display the result
 *
 * @param root - root to print
 * @param iters - number of iterations
 */
void printHelper(double root, int iters);

#endif
