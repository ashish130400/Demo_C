#include "Complex.h"

Complex::Complex()
{
}

Complex::Complex(int, int)
{
}

Complex::Complex(const Complex &)
{
}

int Complex::getreal() const
{
	return 0;
}

int Complex::getimg() const
{
	return 0;
}

int Complex::setreal(int)
{
	return 0;
}

int Complex::setimg(int)
{
	return 0;
}

void Complex::acpt()
{
}

void Complex::display() const
{
}

void Complex::count_obj()
{
	cout << "count is";// counter << " "<< count << endl;
}

Complex Complex::operator +(const Complex& cc)
{
	Complex temp;
	temp.m_real = this->m_real + cc.m_real;
	temp.m_img = this->m_img + cc.m_img;
	return temp;
}

Complex Complex::operator-()
{
	Complex t;
	t.m_real = -m_real;
	t.m_img = -m_img;
	return t;
}

Complex& Complex::operator++()
{
	++m_real;
	++m_img;

	return *this;
	// TODO: insert return statement here
}

Complex Complex::operator++(int)
{
	Complex t = *this;
	m_real++;
	m_img++;
	return t;
}
