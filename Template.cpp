#include<iostream>
#include<string>
#include "Header.h"
#include <vector>
using namespace std;



int main()
{

	int x = 100, y = 200;
	cout << x << " " << y << endl;
	myswap(x, y);
	cout << x << " " << y << endl;
	string n1 = "sachine", n2 = "ashish";
	cout << n1 << " " << n2 << endl;
	myswap(n1, n2);
	cout << n1 << " " << n2<<endl;

	char a[20] = "ashish";
	char b[20] = "gholap";

	cout << a << " " << b << endl;
	myswap(a, b);
	cout << a << " " << b << endl;

	int arr[20];
		
	vector<int> v1{ 19,20,30,40,50 };
	vector<int> v2{ 19,20,30,40,50 };

	for (int i = 0; i < v1.size(); ++i)
		cout << v1[i] << endl;


}