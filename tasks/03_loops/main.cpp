#include <iostream>

#ifdef _WIN32
#include <fcntl.h>
#include <io.h>
#endif
// Прочитать n, затем n целых чисел.
// Напечатать сумму, минимум, максимум и число строго положительных.
// Формат вывода уже собран ниже, менять его не нужно.
// n в тестах всегда >= 0. При n == 0 чисел дальше нет.

int main() {
#ifdef _WIN32
_setmode(_fileno(stdout), _O_BINARY);
#endif
    int n = 0;
    if (!(std::cin >> n)) {
        return 0;
    }

    long long sum = 0;
    int positive = 0;
    bool has_value = false;
    int min_value = 0;
    int max_value = 0;

    for (int i = 0; i < n; ++i) {
        int value = 0;
        std::cin >> value;

        // TODO: обновите sum, positive, min_value, max_value и has_value.
        // positive считает числа строго больше нуля.
        // Ноль и отрицательные в positive не входят.
        // min и max существуют только после первого числа: смотрите на has_value.
        // sum копите в long long: три числа 1000000000 в int не влезают.
        
        if (i == 0){
            min_value = value;
            max_value = value;
        }

        sum = sum + value;
        
        if (value > 0){
            positive ++;
        }

        if (has_value){
            if (min_value > value)
                min_value = value;
            if (max_value < value)
                max_value = value;
        } else {
            min_value = value;
            max_value = value;
        }

        has_value = true;
    }

    std::cout << "sum: " << sum << '\n';
    if (!has_value) {
        std::cout << "min: none\n";
        std::cout << "max: none\n";
    } else {
        std::cout << "min: " << min_value << '\n';
        std::cout << "max: " << max_value << '\n';
    }
    std::cout << "positive: " << positive << '\n';
    return 0;
}
