//1 

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a = 2, b = 4, c = 2, d = 2;
    int max1 = (a > b) ? a : b;
    int max2 = (c > d) ? c : d;
    cout << "Максимальное число = " << ((max1 > max2) ? max1 : max2) << endl;
    return 0;
}

//4

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i = 1, f;
    double sum = 0;
    do
    {
        cin >> f;
        sum += f;
        i++;
    } while (f != 0);
    std::cout << sum / i;
}

//3

#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    float max;
    cout << "Введите значение max: ";
    cin >> max;

    for (float i = 0.25; i < max; i += 0.25) {
        cout << i << endl;
    }

    return 0;
}

//5

#include <iostream>
#include <locale>
#include <cctype>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int i;
    char ch;
    cout << "Введите символ: ";
    cin >> ch;
    if (isalpha(ch))
        cout << "Это английская буква." << endl;
    else
        cout << "Это русская буква" << endl;
    system("pause");
    return 0;
}

//6

#include <iostream>
using namespace std;
int main() {
    int arr[10];

  
    for (int i = 0; i < 10; i++) {
        arr[i] = 7 + i;
    }
    
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


//8
#include <iostream>
using namespace std;

void drawSquare(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                cout << "0";
            }
            else if (i == size / 2 || j == size / 2) {
                cout << "0";
            }
            else {
                cout << " ";
            }
            cout << "    ";
        }
        cout << endl;
        for (int j = 0; j < size; j++) {
            if (j == 0 || j == size - 1) {
                cout << "0";
            }
            else {
                cout << " ";
            }
            cout << "    ";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    int size;
    cout << "Введите размер квадрата: ";
    cin >> size;
    drawSquare(size);
    return 0;
}
 