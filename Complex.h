#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
namespace N
{
	class Complex
	{
    private:
        double real;  // вещественная часть
        double imaginary;  // мнимая часть

    public:
        Complex() {
             real = 0;
             imaginary = 0;
        }

        Complex(int rl, int im) {
             real = rl;
             imaginary = im;
        }
   
        void Set(int gg, int hh);
        void Read();           // ввод с клавиатуры
        void Display();        // вывод
        void Add(Complex x);  // прибавить комплексное число
        void Sub(Complex x);  // вычесть комплексное число
        void Mul(Complex x);  // умножить комплексное число
        void Del(Complex x);
	};
}


