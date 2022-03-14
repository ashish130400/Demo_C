#include <iostream>
#include <string.h>
#pragma warning (disable:4996)

using namespace std;

class base
{
	int x;
public: //Base():x(0){}
	base(int xx) :x(xx) { cout << "ashish const"; }
	 void show()
	 {
		 cout << x << endl;
	 }
	 ~base() { cout << "BAse des"; }
};
class der : public base
{
	char nm[23];
public: der(int id, const char* nmm) :base(id) {
	cout << "const der \n ";
	strcpy(nm, nmm);}
		void show() { base::show(); cout << nm << endl; }
		~der() { cout << "dest der"; }
};

int main()
{
	der d1(1000, "ashish");
	d1.show();

	return 0;

}