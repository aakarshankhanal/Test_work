#include "file4.h"
#include <stdexcept>

int divideNumbers(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}
