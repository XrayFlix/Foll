// 1. Написать программу вычиляющую площадь круга, длину окружности и диаметр по введенному радиусу/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    double r;
    const double P = 3.14159265;

    // Запрос радиуса у пользователя
    cout << "Введите радиус круга: ";
    cin >> r;

    // Вычисление площади круга
    double S = P * pow(r, 2);

    // Вычисление длины окружности
    double okr = 2 * P * r;

    // Вычисление диаметра
    double d = 2 * r;

    // Вывод результатов
    cout << "Площадь круга: " << S << endl;
    cout << "Длина окружности: " << okr << endl;
    cout << "Диаметр: " << d << endl;

    return 0;
}
//2. Написать программу вычисляющую итоговую оценку студента за год. Пользователь вводит итоговую оценку студента за каждую четверть.

#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "");
    std::vector<int> grades;
    int total = 4;

    // Ввод оценок за каждую четверть
    for (int i = 0; i < total; i++) {
        int grade;
        std::cout << "Введите оценку за " << i + 1 << "-ю четверть: ";
        std::cin >> grade;
        grades.push_back(grade);
    }

    // Вычисление средней оценки за год
    double sum = 0.0;
    for (int grade : grades) {
        sum += grade;
    }

    double average = sum / total;

    // Вывод итоговой оценки
    std::cout << "Итоговая оценка за год: " << average << std::endl;

    return 0;
}



















