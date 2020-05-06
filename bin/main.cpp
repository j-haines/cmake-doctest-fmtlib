#include <iostream>
#include <string>

#include <fmt/format.h>

#include "factorial.hpp"

using std::cerr;
using std::endl;

int main(int argc, char** argv) {
    auto n = argc > 2 ? std::stoi(argv[1]) : 10;

    cerr << fmt::format("factorial({:d}) = {:d}", n, factorial(n)) << endl;

    return 0;
}
