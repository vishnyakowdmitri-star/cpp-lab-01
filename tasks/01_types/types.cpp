#include "types.hpp"

#include <limits>
// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    double b_double = b;
    return a / b_double;
}

bool FitsInInt(long long value) {
    long long mn_int, mx_int;
    mn_int = std::numeric_limits<int>::min();
    mx_int = std::numeric_limits<int>::max();

    if (mn_int <= value && value <= mx_int){
        return true;
    }
    return false;
}

long long SumAsLongLong(int a, int b) {
    long long a_l, b_l;
    a_l = a;
    b_l = b;
    return a_l + b_l;
}
