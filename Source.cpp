#include <iostream>
#include <crtdbg.h>
#include "Complex.h"

using namespace std;

Complex& func(Complex &mycomp)
{
	return mycomp;
}

int main()
{
	Complex c1(100, 200);
	Complex c2(50, -100);
	Complex c3(10, 20);

	Complex cc = c1 + c2 + c3;
	//Complex cc = c1.add(c2).add(c3);

	//cc = -c1;
	cc = ++c1;
	cc = c1++;
	cc.display();
	c1.display();
}