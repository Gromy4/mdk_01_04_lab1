#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
namespace N
{
	class Complex
	{
    private:
        double real;  // ������������ �����
        double imaginary;  // ������ �����

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
        void Read();           // ���� � ����������
        void Display();        // �����
        void Add(Complex x);  // ��������� ����������� �����
        void Sub(Complex x);  // ������� ����������� �����
        void Mul(Complex x);  // �������� ����������� �����
        void Del(Complex x);
	};
}


