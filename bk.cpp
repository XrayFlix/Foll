#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a = 0;
    int b = 0;
    char op;
    cout << "Число 1: ";
    cin >> a;
    cout << "Число 2: ";
    cin >> b;
    cout << "Операция: ";
    cin >> op;
    if (op == '+') {
        cout << a << "+" << b << "=" << a + b;
    }
    else if (op == '-') {
        cout << a << "-" << b << "=" << a - b;
    }
    else if (op == '*') {
        cout << a << "*" << b << "=" << a * b;
    }
    else if (op == '/') {
        cout << a << "/" << b << "=" << a / b;
    }
    

}


