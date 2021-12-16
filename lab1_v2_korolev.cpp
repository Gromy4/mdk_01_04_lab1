#include "iostream"
#include <conio.h>
#include <iostream>
using namespace std;
// определение класса комплексных чисел
class Complex {
public:
    void Init(int rl, int im = 0); // инициализировать
    void Read();           // ввод с клавиатуры
    void Display();        // вывод
    void Add(Complex x);  // прибавить комплексное число
    void Sub(Complex x);  // вычесть комплексное число
    void Mul(Complex x);  // умножить комплексное число
private:
    int real;  // вещественная часть
    int imaginary;  // мнимая часть

};
// определение метода ввода
void Complex::Read()
{
    cout << "Enter real : " << "\n";
    cin >> real;
    cout << "Enter imaginary : " << "\n";
    cin >> imaginary;
}

// определение метода вывода
void Complex::Display()
{
    cout << "real=" << real << "\n";
    cout << "imaginary=" << imaginary << "\n";
}
// определение метода инициализации
void Complex::Init(int rl, int im)
{
    real = rl;
    imaginary = im;
}
// определение метода сложения
void  Complex::Add(Complex x)
{
    real = real + x.real;
    imaginary = imaginary + x.imaginary;
}
// определение метода вычитания
void  Complex::Sub(Complex x)
{
    real = real - x.real;
    imaginary = imaginary - x.imaginary;
}
// определение метода умножения
void  Complex::Mul(Complex x)
{
    real = real * x.real - imaginary * x.imaginary;
    imaginary = real * x.imaginary + imaginary * x.real;
}

int main()
{
    Complex number;   // первый объект класса Complex
    number.Init(1, 3);
    cout << "1 number = \n";
    number.Display();
    Complex num2;      // второй объект класса Complex
    num2.Read();
    cout << "2 number = \n";
    num2.Display();
    number.Add(num2);  // прибавить значение второго  объекта к первому
    std::cout << "Add : \n";
    number.Display();
    number.Sub(num2);  // прибавить значение второго  объекта к первому
    std::cout << "Sub : \n";
    number.Display();
    number.Mul(num2);
    std:cout << "Mul : \n";
    number.Display();
    getchar();
    return 1;
}