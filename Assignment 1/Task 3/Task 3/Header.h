#include<iostream>
using namespace std;

class Name {
private:
	char* firstname;
	char* lastname;
public:
	//Constructors and Destructor
	Name(char* = nullptr, char* = nullptr);
	Name();
	Name(const Name&);
	//Functions to perform
	void camelCase();
	void toLower();
	void toUpper();
	int nameLength();
	void swapNames();
	void display();
	char* fullName();
	bool isValidName();
	//Setters and Getters
	void setfirstname(char*);
	void setlastname(char*);
	char* getfirstname();
	char* getlastname();


};
