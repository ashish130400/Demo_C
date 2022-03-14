#include<iostream>
using namespace std;

class base
{
public: virtual void foo()
{
	cout << "'foo base \n";
}
		virtual void bar()
		{
			cout << "bar of base";
		}
};

class derived : public base
{
public:virtual void foo()
{
	cout << "foo of dervied \n";

}
	   void mybar()
	   {
		   cout << "bar of dervied \n";
	   }
};


typedef void(*ptr)();
int main()
{
	base b1;
	derived d1;
	cout << "add of VPTR \n" << &b1 <<endl ;
	cout << " add of VTABLE \n" <<(*(int*) & b1) << endl;
	cout << "add of 2nd vtable \n " << (*(int*)& d1) << endl;
	cout << " add of first virtual func in first vtable " << *((int*)*(int*)&b1) << endl;
	cout << " add of 2nd virtual func in first vtable " << *((int*)*(int*)&b1 +1) << endl;
	cout << "add of 1st funct in 2nd vtable " << *((int*)*(int*)&d1);
	cout << "add of 2nd funct in 2nd vtable " << *((int*)*(int*)&d1 + 1);

	ptr p1 = (ptr)*(int*) *(int*)&b1;

	p1();

	ptr p2 = (ptr)* ((int*)*(int*)&b1+1);
	p2();
	ptr p3 = (ptr)*(int*)*(int*)&d1;
	p3();

	ptr p4 =(ptr)* ((int*)*(int*)&d1 + 1);
	p4();
	return 0;

}