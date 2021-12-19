// инициализацию производить в конструкторе
//init на set


#include <conio.h>
#include <iostream>
#include "Complex.h"
using namespace std;
using namespace N;

// определение класса комплексных чисел

int main()
{
    
    Complex number;   // первый объект класса Complex
    number.Set(1, 3);
    cout << "1 number = \n";
    number.Display();
    Complex num2;      // второй объект класса Complex
    num2.Read();
    cout << "2 number = \n";
    num2.Display();
    number.Add(num2);  // прибавить значение второго  объекта к первому
    std::cout << "Add : \n";
    number.Display();
    number.Set(1, 3);
    number.Sub(num2);  // прибавить значение второго  объекта к первому
    std::cout << "Sub : \n";
    number.Display();
    number.Set(1, 3);
    number.Mul(num2);
    std:cout << "Mul : \n";
    number.Display();
    number.Set(1, 3);
    number.Del(num2);
    std::cout << "Del : \n";
    number.Display();
    getchar();
    return 1;
}