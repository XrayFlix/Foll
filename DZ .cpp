//Ввод/вывод данных Задача 1 Написать программу, которая запрашивает у пользователя его имя и выводит его приветствие на экран.

//#include <iostream>
//#include <string>

//int main() {
    //setlocale(LC_ALL, "");
    //std::string name;
    //std::cout << "Введите ваше имя: ";
    //std::cin >> name;
    //std::cout << "Привет, " << name << "!" << std::endl;
    //return 0;
//}

//Задача 2 Написать программу, которая запрашивает у пользователя два числа и выводит их сумму.

//#include <iostream>

//int main() {
  //  setlocale(LC_ALL, "");
    //int num1, num2;
    //std::cout << "Введите первое число: ";
    //std::cin >> num1;
    //std::cout << "Введите второе число: ";
    //std::cin >> num2;
    //int sum = num1 + num2;
    //std::cout << "Сумма: " << sum << std::endl;
    //return 0;
//}

//Задача 3 Написать программу, которая запрашивает у пользователя его возраст и выводит его на экран, а затем выводит сообщение о том, совершеннолетний пользователь или нет.
//#include <iostream>

//int main() {
  //  setlocale(LC_ALL, "");
    //int age;
    //std::cout << "Введите ваш возраст: ";
    //std::cin >> age;
    //std::cout << "Ваш возраст: " << age << std::endl;

    //if (age >= 18) {
      //  std::cout << "Вы совершеннолетний." << std::endl;
    //}
    //else {
      //  std::cout << "Вы несовершеннолетний." << std::endl;
    //}

    //return 0;
//}

//Арифметические операторы Задача 1 Написать программу, которая запрашивает у пользователя два числа и выводит их сумму, разность, произведение и частное.

//#include <iostream>

//int main() {
  //  setlocale(LC_ALL, "");
    //int num1, num2;
    //std::cout << "Введите первое число: ";
    //std::cin >> num1;
    //std::cout << "Введите второе число: ";
    //std::cin >> num2;

    //int sum = num1 + num2;
    //int difference = num1 - num2;
    //int product = num1 * num2;
    //float quotient = static_cast<float>(num1) / num2; // приведение типа int к float для получения точного значения частного

    //std::cout << "Сумма: " << sum << std::endl;
    //std::cout << "Разность: " << difference << std::endl;
    //std::cout << "Произведение: " << product << std::endl;
    //std::cout << "Частное: " << quotient << std::endl;

    //return 0;
//}

//Задача 2 Написать программу, которая запрашивает у пользователя число и выводит его квадрат.

//#include <iostream>

//int main() {
    //setlocale(LC_ALL, "");
    //int num;
    //std::cout << "Введите число: ";
    //std::cin >> num;
    //int square = num * num;
    //std::cout << "Квадрат числа: " << square << std::endl;
    //return 0;
//}

//Задача 3 Написать программу, которая запрашивает у пользователя количество часов и минут, и выводит общее количество минут.

//#include <iostream>

//int main() {
    //setlocale(LC_ALL, "");
    //int hours, minutes;
    //std::cout << "Введите количество часов: ";
    //std::cin >> hours;
    //std::cout << "Введите количество минут: ";
    //std::cin >> minutes;
    //int totalMinutes = hours * 60 + minutes;
    //std::cout << "Общее количество минут: " << totalMinutes << std::endl;
    //return 0;
//}

// Условие Задача 1 Напишите программу, которая проверяет, введенное число на то что оно положительное или отрицательное.

//#include <iostream>
//using namespace std;

//int main(){
    //setlocale(LC_ALL, "");
    //int number;
    //cout << "Введите число: ";
    //cin >> number;

    //if (number > 0)
        //cout << "Число положительное" << endl;
    //else if (number < 0)
        //cout << "Число отрицательное" << endl;
    //else
        //cout << "Число равно нулю" << endl;

    //return 0;
//}

//Задача 2 Напишите программу, которая проверяет, введенное число четное или нечетное.

//#include <iostream>
//using namespace std;

//int main(){
    //setlocale(LC_ALL, "");
    //int number;
    //cout << "Введите число: ";
    //cin >> number;

    //if (number % 2 == 0)
        //cout << "Число четное" << endl;
    //else
        //cout << "Число нечетное" << endl;

    //return 0;
//}

//Задача 3 Напишите программу, которая проверяет, введенный символ буквой верхнего регистра или нижнего регистра.

//#include <iostream>
//using namespace std;

//int main(){
    //setlocale(LC_ALL, "");
    //char symbol;
    //cout << "Введите символ: ";
    //cin >> symbol;

    //if (symbol >= 'A' && symbol <= 'Z')
        //cout << "Символ является буквой верхнего регистра" << endl;
    //else if (symbol >= 'a' && symbol <= 'z')
        //cout << "Символ является буквой нижнего регистра" << endl;
    //else
        //cout << "Символ не является буквой" << endl;

    //return 0;
//}

//Тернарный оператор Задача 1 Напишите программу, которая проверяет, делится ли число x на 2.

//#include <iostream>
//using namespace std;

//int main() {
    //setlocale(LC_ALL, "");
    //int x;
    //cout << "Введите число: ";
    //cin >> x;

    //string result = (x % 2 == 0) ? "Число делится на 2" : "Число не делится на 2";
    //cout << result << endl;

    //return 0;
//}

//Задача 2 Напишите программу, которая определяет, является ли число x положительным, отрицательным или нулём.

//#include <iostream>
//using namespace std;

//int main() {
    //setlocale(LC_ALL, "");
    //int x;
    //cout << "Введите число: ";
    //cin >> x;

    //string result = (x > 0) ? "Число положительное" : (x < 0) ? "Число отрицательное" : "Число равно нулю";
    //cout << result << endl;

    //return 0;
//}

// Switch case Задача 1 Напишите программу, которая принимает на вход число от 1 до 7 и выводит на экран соответствующий день недели (1 - Понедельник, 2 - Вторник и т.д.)

//#include <iostream>
//using namespace std;

//int main() {
    //setlocale(LC_ALL, "");
    //int day;
    //cout << "Введите число от 1 до 7: ";
    //cin >> day;

    //switch (day) {
    //case 1:
        //cout << "Понедельник" << endl;
        //break;
    //case 2:
        //cout << "Вторник" << endl;
        //break;
    //case 3:
        //cout << "Среда" << endl;
        //break;
    //case 4:
        //cout << "Четверг" << endl;
        //break;
    //case 5:
        //cout << "Пятница" << endl;
        //break;
    //case 6:
        //cout << "Суббота" << endl;
        //break;
    //case 7:
        //cout << "Воскресенье" << endl;
        //break;
    //default:
        //cout << "Некорректный день недели" << endl;
        //break;
    //}

    //return 0;
//}

//Задача 2 Напишите программу, которая принимает на вход число от 1 до 12 и выводит на экран соответствующий месяц (1 - Январь, 2 - Февраль и т.д.).

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int month;
    cout << "Введите число от 1 до 12: ";
    cin >> month;

    switch (month) {
    case 1:
        cout << "Январь" << endl;
        break;
    case 2:
        cout << "Февраль" << endl;
        break;
    case 3:
        cout << "Март" << endl;
        break;
    case 4:
        cout << "Апрель" << endl;
        break;
    case 5:
        cout << "Май" << endl;
        break;
    case 6:
        cout << "Июнь" << endl;
        break;
    case 7:
        cout << "Июль" << endl;
        break;
    case 8:
        cout << "Август" << endl;
        break;
    case 9:
        cout << "Сентябрь" << endl;
        break;
    case 10:
        cout << "Октябрь" << endl;
        break;
    case 11:
        cout << "Ноябрь" << endl;
        break;
    case 12:
        cout << "Декабрь" << endl;
        break;
       }
    return 0;
   }

