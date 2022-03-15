#include<iostream>
using namespace std;

class singleton
{
private: int data;
		 static singleton* ptr;
		 singleton() //write all constructor in pvt not in public.
		 {

		 }
		 singleton(int data):data(data){} //paramter constructor
public: static singleton* create( int value)
		{
			if (ptr == NULL)
			{
				ptr = new singleton(value);
				return ptr;
			}
			else 
				return ptr;
			
		}

		void show()
		{
			cout << data << endl;
			cout << "add of object" << this << endl;
		}
};
singleton* singleton::ptr = NULL;
int main()
{

	((singleton::create(1000))->show());
	((singleton::create(2000))->show());
	((singleton::create(3000))->show());


	return 0;
}