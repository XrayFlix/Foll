// Посчитать количество простых чисел в указанном диапазоне

#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int countPrimesInRange(int start, int end) {
    int count = 0;

    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            ++count;
        }
    }

    return count;
}

int main() {
    setlocale(LC_ALL, "");
    int start, end;

    std::cout << "Введите начало диапазона: ";
    std::cin >> start;

    std::cout << "Введите конец диапазона: ";
    std::cin >> end;

    if (start > end) {
        std::cout << "Ошибка: начало диапазона больше конца диапазона.\n";
        return 1;
    }

    int result = countPrimesInRange(start, end);

    std::cout << "Количество простых чисел в диапазоне от " << start << " до " << end << ": " << result << std::endl;

    return 0;
}