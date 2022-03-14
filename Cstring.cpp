#include "Cstring.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;

Cstring::Cstring()
{
	m_len = 0;
	m_buff = new char;
	*m_buff = '\0';
}

Cstring::Cstring(const char* str)
{
	m_len = strlen(str);
	m_buff = new char[m_len + 1];
	strcpy(this->m_buff, str);
}


Cstring::Cstring(const Cstring &s)
{
	m_len = s.m_len;
	m_buff = new char[m_len + 1];
	strcpy(m_buff, s.m_buff);
	cout << "copy ctor" << endl;
}
Cstring::Cstring(char ch, int no)
{
	m_len = no;
	m_buff = new char[m_len + 1];
	memset(m_buff, ch, no);
	m_buff[m_len] = '\0';
}

void Cstring::show_S()
{
	cout << m_len << "" << m_buff << endl;
}

void Cstring::acpt()
{
	cout << "Enter string " << endl;
	delete[]m_buff;
	m_buff = new char[80];
	cin.getline(m_buff, 80);
	m_len = strlen(m_buff);
}
Cstring::~Cstring()
{
	if (m_buff)
		delete m_buff;
	m_buff = nullptr;

}

//Cstring& Cstring::opertor
