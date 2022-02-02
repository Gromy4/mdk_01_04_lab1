#include "Complex.h"
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;
using namespace N;



void N::Complex::Read()
{
    cout << "Enter real : " << "\n";
    cin >> real;
    cout << "Enter imaginary : " << "\n";
    cin >> imaginary;
}

void N::Complex::Display()
{
    cout << "real=" << real << "\n";
    cout << "imaginary=" << imaginary << "\n";
}

void N::Complex::Set(int gg, int hh)
{
    real = gg;
    imaginary = hh;
}
// addition method definition
void N::Complex::Add(Complex x)
{
    real = real + x.real;
    imaginary = imaginary + x.imaginary;
}
// subtraction method definition
void N::Complex::Sub(Complex x)
{
    real = real - x.real;
    imaginary = imaginary - x.imaginary;
}
// multiplication method definition
void N::Complex::Mul(Complex x)
{
    real = real * x.real - imaginary * x.imaginary;
    imaginary = real * x.imaginary + imaginary * x.real;
}
// division method definition
void N::Complex::Del(Complex x)
{
    if (x.real == 0 || x.imaginary == 0) {
        std::cout << "\n Exception \nCannot be divided by 0 \n";
        exit(0);
    }
    else {
        real = (real * x.real + imaginary * x.imaginary) / (x.real * x.real + x.imaginary * x.imaginary);
        imaginary = (x.real * imaginary - real * x.imaginary) / (x.real * x.real + x.imaginary * x.imaginary);
    } 
}
