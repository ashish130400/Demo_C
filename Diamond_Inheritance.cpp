#include <iostream>
#pragma warning (disable:4996)
using namespace std;



class Base {
protected: int x;
public: Base():x(100){}
		void show()
		{
			cout << x << endl;
		}
};

class derived1 : public virtual Base{

};
class derived2 :  virtual public Base{

};
class derived : public derived1, public derived2{

public: int getx() { return derived2::x; }
		void show() { derived1::show(), derived2::show(); }
};

int main()
{
	derived d1;
	d1.derived1::show();
	d1.derived2::show();
	cout<< d1.getx() << endl;
	d1.show();

	return 0;
}