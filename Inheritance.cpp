#include<iostream>

using namespace std;

class base {
public: void foo()
	{
		cout << "base \n";
		//static_cast<derived *const>(this)->bar
		
	}
		void foo(int x) {
			cout << "iint base \n";
		}
		void foo(float x)
		{
			cout << "Float \n";
		}
};

class derived :public base
{
public: using base::foo; // making ALL OVERLOAD FUNCT VISIBLE
	void Nfoo(double dd)
{
	cout << "double double \n";
}
	
	void bar()
	{
		cout << "Derived \n";
		//this->foo();
		//cout << this;
	}

};

int main()
	{
		derived d1;
		d1.foo();
		d1.foo(21);
		d1.foo(2.0f);
		d1.bar();
		d1.Nfoo(22);
		 


		return 0;
	}