#include "mathfuncs.h"
#include <stdexcept>

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("cannot divide by zero");
    }

    return a / b;
}