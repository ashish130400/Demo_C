#pragma once
#include <iostream>

using namespace std;

class Complex
{
private: mutable int m_real;
		 int m_img;
		 static int count;
public: Complex();
		Complex(int, int);
		Complex(const Complex&);
		int getreal()const;
		int getimg()const;
		int setreal(int);
		int setimg(int);
		void acpt();
		void display()const;
		static void count_obj();
		Complex operator +(const Complex&);
		Complex operator -();
		Complex& operator ++();
		Complex operator ++(int);
};

// extern int counter;