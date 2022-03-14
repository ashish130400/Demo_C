#pragma once
#include <iostream>
using namespace std;

class Cstring
{
	char* m_buff;
	int m_len;
public:
	Cstring();
	Cstring(const char*);
	//Cstring(const &s);
	Cstring(const Cstring & s);
	Cstring(char, int);
	void show_S();
	void acpt();
	~Cstring();

};