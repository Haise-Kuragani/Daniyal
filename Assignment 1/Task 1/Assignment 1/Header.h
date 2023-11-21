#include <iostream>
using namespace std; 
class MyNum
{
private:
	int num;
public:
	// Paramerized Constructoe with default arguments
	MyNum(int a=0);
	
	void setnum(int);
	
	int getnum();

	void NegativeConvert();
	
	void PositiveConvert();
	
	void display();
	
	~MyNum();
};