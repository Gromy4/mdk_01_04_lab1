#include <conio.h>
#include <iostream>
#include "Complex.h"
using namespace std;
using namespace N;

int main()
{
    
    Complex number;   // the first object of class Complex
    number.Set(1, 3);
    cout << "1 number = \n";
    number.Display();
    Complex num2;      // second object of class Complex
    num2.Read();
    cout << "\n 2 number = \n";
    num2.Display();
    number.Add(num2);  
    std::cout << "\n Add : \n";
    number.Display();
    number.Set(1, 3);
    number.Sub(num2);  
    std::cout << "\n Sub : \n";
    number.Display();
    number.Set(1, 3);
    number.Mul(num2);
    std:cout << "\n Mul : \n";
    number.Display();
    number.Set(1, 3);
    number.Del(num2);
    std::cout << "\n Del : \n";
    number.Display();
   
    getchar();
    return 1;
}