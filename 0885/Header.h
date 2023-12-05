#pragma once
#include<iostream>
using namespace std;
class cstring {
private:
	char* name;
public:
	cstring();
	cstring(const char arr[]);
	cstring(const cstring&);
	cstring(const cstring& , int, int);
	cstring(const char* , int );
	
	cstring(int , char );

const void display();
};
int lencheck(const char* );
void ArrayCopy(int ,char*, char*);