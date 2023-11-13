// 1. Пользователь вводит с клавиатуры символ. Определить, какой это символ : Буква, цифра, знак препинания или другое.

#include <iostream>
#include <cctype>

int main() {
    setlocale(LC_ALL, "");
    char symbol;

    // Ввод символа с клавиатуры
    std::cout << "Введите символ: ";
    std::cin >> symbol;

    // Проверка типа символа
    if (std::isalpha(symbol)) {
        std::cout << "Это буква." << std::endl;
    }
    else if (std::isdigit(symbol)) {
        std::cout << "Это цифра." << std::endl;
    }
    else if (std::ispunct(symbol)) {
        std::cout << "Это знак препинания." << std::endl;
    }
    else {
        std::cout << "Это что-то другое." << std::endl;
    }

   return 0;
}

// 2. Написать программу подсчета стоимости разговора для
//разных мобильных операторов.Пользователь вводит длительность разговора и выбирает с какого на какой оператор
//он звонит.Вывести стоимость на экран.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    const double operatorA = 3;  // оператор A
    const double operatorB = 5;  // оператор B
    const double operatorC = 7;  // оператор C

    double dlin;  // Длительность разговора
    char viboperator;  // Выбор оператора

    // Ввод
    cout << "Введите длительность разговора (в минутах): ";
    cin >> dlin;

    cout << "Выберите оператор (A, B, C): ";
    cin >> viboperator;

    // Cтоимость разговора
    double cost = 0.0;
    switch (viboperator) {
    case 'A':
        cost = dlin * operatorA;
        break;
    case 'B':
        cost = dlin * operatorB;
        break;
    case 'C':
        cost = dlin * operatorC;
        break;
    default:
        cout << "Неверный выбор оператора." << endl;
        return 1;  // Код ошибки
    }

    // Вывод
    cout << fixed << setprecision(2);  // Ограничение вывода до двух знаков
    cout << "Стоимость разговора: руб " << cost << endl;

    return 0;
}















