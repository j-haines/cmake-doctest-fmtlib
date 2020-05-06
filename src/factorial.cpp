#include "factorial.hpp"

int factorial(int n) {
    if (n < 3) {
        return n < 1 ? 0 : n;
    }

    return n * factorial(n - 1);
}
