#include <iostream>
#include <cmath> // to use fabs() that calculates absolute values

#include "newton.h"
#include "quadratic.h"

using namespace std;

void newtonRaphsonQuad(double guess, double a, double b, double c) {
    int iters = 0;
    int q = 0;
    int r = 0;
    double root = 0;
    double difference = 0;

 for (iters = 0; i < MAX_ITERS; i++) {
       q = double myQuad(double x, double a, double b, double c);
       r = double myQuadPrime(double x, double a, double b);
       temp = guess - q/r;
       difference = fabs(root - temp);
           if (difference <= THRESHOLD) {
               guess = temp;
               root = guess;
               break
            else
                   guess = temp;
                   root = guess;
           }
    }

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
