#include "Complex.h"
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>

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
// определение метода сложения
void N::Complex::Add(Complex x)
{
    real = real + x.real;
    imaginary = imaginary + x.imaginary;
}

void N::Complex::Sub(Complex x)
{
    real = real - x.real;
    imaginary = imaginary - x.imaginary;
}

void N::Complex::Mul(Complex x)
{
    real = real * x.real - imaginary * x.imaginary;
    imaginary = real * x.imaginary + imaginary * x.real;
}

void N::Complex::Del(Complex x)
{
    real = (real * x.real + imaginary * x.imaginary) / (x.real * x.real + x.imaginary * x.imaginary);
    imaginary = (x.real * imaginary - real * x.imaginary) / (x.real * x.real + x.imaginary * x.imaginary);
}
