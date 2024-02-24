// Написать функцию, которая возвращает куб числа.
//

#include <iostream>
#include <windows.h>
using namespace std;
#define CUBE(x) ((x) * (x) * (x))


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int cubNum = 0;
    cout << "Введите число и узнаете каково оно в кубе : ";
    cin >> cubNum;
    
    cout <<  " Куб числа :" << CUBE(cubNum) << endl;
}

