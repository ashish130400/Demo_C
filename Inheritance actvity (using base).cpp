#include <iostream>

using namespace std;

class base
{
public: void foo()
{
	cout << "foo base \n";
}
		void bar()
		{
			cout << "bar base \n";
		}
};

class Derived :public base {

	using base::bar;
};
class Newd : base
{
public: using base::foo;
};

int main()
{
	Derived d1;
	d1.foo();
	Newd nd;
	nd.foo();

	return 0;
}