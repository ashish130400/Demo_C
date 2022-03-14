#include "Cstring.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	{
		Cstring s1;
		//s1.show_s();

		Cstring s2("Ashish");
		//s2.show_s();
		 
		Cstring s3("gholap");

		s1 = s2 = s3;

		s3.show_S();
		s1.show_S();
		s2.show_S();
		s2.acpt();
		s2.show_S();

		cout << "LEaks" << _CrtDumpMemoryLeaks() << endl;
		//s3.show_S();
	}
	//cout << "LEaks" << _CrtDumpMemoryLeaks() << endl;
	return 0;

}