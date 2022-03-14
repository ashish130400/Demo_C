#include <iostream>

using namespace std;

class demo
{
	int x;
public:
	demo():x(10){}
	void show() { cout << x << endl; }

	friend void fuc();
};


void fuc()
{
	demo d1;
	d1.x = 10000;
	cout << d1.x << endl;


}

int main()
{
	fuc();
	return 0;

}