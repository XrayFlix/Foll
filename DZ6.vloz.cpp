// 1. В одномерном массиве, заполненном случайными числами,
// определить минимальный и максимальный элементы.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    setlocale(LC_ALL, "");
    const int size = 10;
    int num[size];

    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        num[i] = std::rand() % 100;
    }

    // Вывод массива
    std::cout << "Массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;

    // Поиск мин, макс
    int min = num[0];
    int max = num[0];

    for (int i = 1; i < size; ++i) {
        if (num[i] < min) {
            min = num[i];
        }
        if (num[i] > max) {
            max = num[i];
        }
    }

    // Вывод
    std::cout << "Минимальный элемент: " << min << std::endl;
    std::cout << "Максимальный элемент: " << max << std::endl;

    return 0;
}

// 2. В одномерном массиве, заполненном случайными числами
//в заданном пользователем диапазоне, найти сумму элементов,
//значения которых меньше указанного пользователем.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    setlocale(LC_ALL, "");
    const int size = 10;

    int from, to;
    std::cout << "От: ";
    std::cin >> from;
    std::cout << "До: ";
    std::cin >> to;

    // Знач, сравниваемое с элемен массив
    int usz;
    std::cout << "Введите значение, с которым будут сравниваться элементы массива: ";
    std::cin >> usz;

    int array[size];
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % (to - from + 1) + from;
    }

    // Вывод элемен массива
    std::cout << "Элементы массива: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Сумма элемен, знач которых меньше
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] < usz) {
            sum += array[i];
        }
    }

    // Вывод
    std::cout << "Сумма элементов, значения которых меньше " << usz << ": " << sum << std::endl;

    return 0;
}

// 3. Пользователь вводит прибыль фирмы за год (12 месяцев).
//Затем пользователь вводит диапазон(например, 3 и 6 — поиск
	//между 3 - м и 6 - м месяцем).Необходимо определить месяц,
	//в котором прибыль была максимальна и месяц, в котором
	//прибыль была минимальна с учетом выбранного диапазона.

#include <iostream>
#include <climits>

int main() {
    setlocale(LC_ALL, "");
    const int months = 12;
    int prof[months];

    for (int i = 0; i < months; ++i) {
        std::cout << "Введите прибыль для " << i + 1 << "-го месяца: ";
        std::cin >> prof[i];
    }

    int startM, endM;
    std::cout << "Введите нач и кон месяцы (например, 3 6): ";
    std::cin >> startM >> endM;

    // Проверка
    if (startM < 1 || startM > months || endM < 1 || endM > months || startM > endM) {
        std::cerr << "Некорректный ввод диапазона." << std::endl;
        return 1;
    }

    // Макс и мин прибыль в заданном диапазоне
    int maxProf = INT_MIN;
    int minProf = INT_MAX;
    int maxM, minM;

    for (int i = startM - 1; i < endM; ++i) {
        if (prof[i] > maxProf) {
            maxProf = prof[i];
            maxM = i + 1;
        }

        if (prof[i] < minProf) {
            minProf = prof[i];
            minM = i + 1;
        }
    }

    // Вывод
    std::cout << "Макс прибыль, от " << startM << "-го до " << endM << "-го месяца: " << maxProf << " (месяц " << maxM << ")" << std::endl;
    std::cout << "Мин прибыль, от " << startM << "-го до " << endM << "-го месяца: " << minProf << " (месяц " << minM << ")" << std::endl;

    return 0;
}














