#include <iostream>
#pragma pack (1)
using namespace std;

class base
{

	int x;
public: virtual void foo() 
	{
	cout << "'foo base \n";
	}
};

class derived :public base
{
public: void foo() {
		cout << " foo derived \n";
	
	}
		void bar()
		{
			cout << "bar of dervied";
		}
};

int main()
{


	cout << sizeof(base);
	base b1, *bptr;
	derived d1, *dptr;
	//b1 = d1;
	//bptr = &b1;
	//bptr->foo();
	//bptr = &d1;
	//bptr->foo();
	

	//static_cast<derived*>(bptr)->foo(); //typecast pointer.
	//static_cast<derived*>(bptr)->bar();
	
	bptr = &d1;
	bptr->foo();

	static_cast<derived*>(bptr)->bar();
	cout << endl;
	
	return 0;
}