#include<iostream>
using namespace std;


typedef struct employee
{
	// declare different memory for each variable in class
	//data
	int id;
	char favChar;
	float salary;
}ep;



union money
{
	// delcare a similar memory for every class 
	// but u can only use one at a time 
	//data
	int rice; //4
	char car; //1
	float pounds; //4

};


int main()
{
	// Structure 
	struct employee asad;
	asad.id = 1;
	asad.favChar = 'a';
	asad.salary = 1200;
	


	cout <<"Value of Asad Salary is " << asad.salary << endl;
	cout <<"The favourite character of Asad is " << asad.favChar << endl;
	cout <<"Asad id is " << asad.id << endl;
	 
	ep haseeb;
	haseeb.id = 2;
	haseeb.favChar = 'f';
	haseeb.salary = 0.00;

	// union 

	union money m1;
	m1.rice = 34;
	m1.car = 'a';
	cout <<"Value of rice is " << m1.rice << endl;
	cout << "Value of Car " << m1.car << endl;

	//Enum
	// becomes a data type and can store data like 0 1 2
	enum Meal{ Breakfast , lunch , dinner};
	Meal m2 = dinner;
	cout << (m2 == 1) << endl;// Way to check wether its true or not 
	cout << "Value of m2 " << m2 << endl;
	cout << "This is Breakfast Value " << Breakfast << endl;
	cout << "This is Lunch Value " << lunch << endl;
	cout << "This is Dinner Value " << dinner << endl;
	return 0;
}