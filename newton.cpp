#include <iostream>
#include <cmath> // to use fabs() that calculates absolute values

#include "newton.h"
#include "quadratic.h"

using namespace std;

void newtonRaphsonQuad(double guess, double a, double b, double c) {
    int iters = 0;

    // TODO: write your code
    // note: the final result (approximate root) must be stored in "guess"

    // print out the result
    printHelper(guess, iters);
}

void printHelper(double root, int iters) {
    if (iters < MAX_ITERS) {
        cout << "Root Found: " << root << ", Iterations: " << iters << endl;
    } else {
        cout << "No root found. Max iterations reached ( " << iters << " )" << endl;
    }
}
