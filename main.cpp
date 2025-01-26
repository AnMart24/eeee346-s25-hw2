#include <iostream>
#include "newton.h"

using namespace std;

int main() {
    // quadratic coefficients
    double a, b, c;

    // guess for the root
    double guess;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> guess;

    // call newtonRaphsonQuad()
    newtonRaphsonQuad(guess, a, b, c);

    return 0;
}
