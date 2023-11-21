#include "Header.h"
using namespace std;


	// Paramerized Constructoe with default arguments
MyNum::MyNum(int a = 0)
{
	num = a;
};
MyNum::~MyNum()
{

};
void MyNum::setnum(int a)
{
	num = a;
}
int MyNum::getnum()
{
	return num;
}
void MyNum::NegativeConvert()
{

	num = num * (-1);
	cout << "Positive Number is " << num << endl;
}
void MyNum::PositiveConvert()
{
	num = num * (-1);
	cout << "Negative Number is " << num << endl;

}
void MyNum::display()
{
	cout << "Your NUmber is " << num << endl;
}

