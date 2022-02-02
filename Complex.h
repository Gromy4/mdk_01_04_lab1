#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
namespace N
{
	class Complex
	{
    private:
        double real;  // real part
        double imaginary;  // imaginary part

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
        void Read();           // keyboard input
        void Display();        // conclusion
        void Add(Complex x);  // add complex number
        void Sub(Complex x);  // subtract complex number
        void Mul(Complex x);  // multiply complex number
        void Del(Complex x); // divide complex number
	};
}


