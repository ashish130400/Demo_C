#include <iostream>
using namespace std;


int& add(int &x, int &y)
{
	return x;

}
int& funct(int &x)
{
	return x;


}


int&& newf(int&& x)
{
	return 99;
}


int main()
{
	int x = 10;
	int y = 20;

	int&& ref = 1000;
	cout << ref << endl;


	int&& ref1 = 100 + 200;
	cout << ref1<<endl;

	int& ref2 = funct(x);
	cout << ref2<<endl;

	int && ref3 = newf(10 + 20);

	cout << ref3 << endl;



	int value = 10;
	int& myr = value;
	int&& myr1 = x + y;

	cout << "NEW"<< value << endl << myr << myr1 << endl;


	return 0;

}