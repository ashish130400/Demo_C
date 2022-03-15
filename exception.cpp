#include <iostream>
#include<string>

using namespace std;


class demo
{
public: demo()
{
	cout << "ctor called \n";
}


	~demo()
	{
		cout << "dest called  demo\n";
	}
};

class derived
{
public: derived()
{
	cout << "ctor called \n";
}


		~derived()
		{
			cout << "dest called dervied \n";
		}
};

float divide(int x, int y)
{
	int* ptr = new int(5);

	if (y == 0)
		delete ptr;
		throw 99;

	if (y == -1)
		delete ptr;
		throw string("-ve value");

	if (y == 1)
		delete ptr;
		throw 3.145;

	if (y == 2)
	{
		delete ptr;
		throw derived();
	}
	delete ptr;
	return static_cast<float>(x) / y;
}

int main()
{
	try
	{
		cout << divide(10, 3) << endl;
		cout << divide(10, 2) << endl;
	}
	catch (int)
	{
		cout << "divided by zero has occured" << endl;
	}
	catch (string &s)
	{
		cout << s << endl;
	}
	catch (demo dd)
	{
		cout << "catch for demo";
	}
	catch (derived dd)
	{
		cout << "catch for derived \n";
	}
	catch (...)
	{
		cout << "universal catch block";
	}

	return 0;
}