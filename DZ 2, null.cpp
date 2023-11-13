// 2. Пользователь вводит четырехзначное число. Необходимо
//поменять в этом числе 1 и 2 цифры, а также 3 и 4 цифры.Если
//пользователь вводит не четырехзначное число — вывести
//сообщение об ошибке.

#include <iostream>
int main() {
    setlocale(LC_ALL, "");
    std::cout << "Введите четырехзначное число: ";

    int number;
    std::cin >> number;

    // Проверка
    if (number < 1000 || number > 9999) {
        std::cout << "Ошибка: Введите четырехзначное число." << std::endl;
        return 1;
    }

    // Меняем местами цифры.
    int newNumber = ((number % 100) * 100) + ((number / 100) % 100);

    // Вывод
    std::cout << "Исходное число: " << number << std::endl;
    std::cout << "Измененное число: " << newNumber << std::endl;

    return 0;
}

// 3. Пользователь вводит с клавиатуры 7 целых чисел. Напишите программу, которая определяет максимальное из этих 7 чисел.

#include <iostream>

int main() {
    setlocale(LC_ALL, "");
    int numbers[7];
    int maxNumber;

    std::cout << "Введите 7 целых чисел:\n";
    for (int i = 0; i < 7; ++i) {
        std::cout << "Число " << (i + 1) << ": ";
        std::cin >> numbers[i];
    }

    // Поиск макс числа
    maxNumber = numbers[0];
    for (int i = 1; i < 7; ++i) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    // Вывод
    std::cout << "Максимальное число: " << maxNumber << std::endl;

    return 0;
}