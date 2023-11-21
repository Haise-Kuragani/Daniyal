#include"Header.h"
#include"Helpfile.h"
using namespace std;

//Display
void Name::display() {
	cout <<"First Name is " << firstname << " Last Name is " << lastname << endl;
}
//Default
Name::Name() {
	firstname = nullptr;
	lastname = nullptr;

}
// Setters and Getters
void Name::setfirstname(char* arr) {
	int size;
	size = CharacterSize(arr);
	firstname = new char[size + 1];
	for (int i = 0; i <= size; i++) {
		firstname[i] = arr[i];
	}

}
void Name::setlastname(char* arr) {

	int size;
	size = CharacterSize(arr);
	lastname = new char[size + 1];
	for (int i = 0; i <= size; i++) {
		lastname[i] = arr[i];
	}

}
char* Name::getfirstname() {
	char* c;

	c = CopyFunction(firstname);
	return c;
}
char* Name::getlastname() {

	char* c;

	c = CopyFunction(lastname);
	return c;

}
//Paramerized with Default
Name::Name(char* first, char* last)
{
	if (first != nullptr || last != nullptr) {
		int size;

		size = CharacterSize(first);
		firstname = new char[size + 1];

		for (int i = 0; i < size; i++) {
			firstname[i] = first[i];

		}
		firstname[size] = '\0';
		size = CharacterSize(last);
		lastname = new char[size + 1];
		for (int i = 0; i < size; i++) {
			lastname[i] = last[i];
		}
		lastname[size] = '\0';
	}
	else { 
		firstname = first;
		lastname = last;
	}
}

// Copy Constructor
Name::Name(const Name& x) {
	int size;
	size = CharacterSize(x.firstname);

	firstname = new char[size + 1];
	for (int i = 0; i < size; i++) {
		firstname[i] = x.firstname[i];

	}
	firstname[size] = '\0';

	
	size = CharacterSize(x.lastname);

	lastname = new char[size + 1];
	for (int i = 0; i < size; i++) {
		lastname[i] = x.lastname[i];

	}
	lastname[size] = '\0';
}

//Tasks

void Name::camelCase()
{
	if (firstname[0] >= 'a' && firstname[0] <= 'z') {

		firstname[0] = firstname[0] - int('a' - 'A');

	}

	if (lastname[0] >= 'a' && lastname[0] <= 'z') {
		lastname[0] = lastname[0] - int('a' - 'A');

	}
}
void Name::toLower()
{
	int size = 0;

	size = CharacterSize(firstname);

	for (int i = 0; i < size; i++) {

		if (firstname[i] >= 'A' && firstname[i] <= 'Z') {
			firstname[i] = firstname[i] + int('a' - 'A');

		}

	}
	size = CharacterSize(lastname);

	while (lastname[size] != '\0')
	{
		size++;
	}

	for (int i = 0; i < size; i++) {

		if (lastname[i] >= 'A' && lastname[i] <= 'Z') {
			lastname[i] = lastname[i] + int('a' - 'A');

		}

	}


}
int Name::nameLength()
{
	int size;
	size = CharacterSize(firstname);

	int size2;
	size2 = CharacterSize(lastname);
	size = size + size2;

	cout << "the size is " << size << endl;
	return size;
}
void Name::toUpper()
{
	int size;

	size = CharacterSize(firstname);

	for (int i = 0; i < size; i++) {


		if (firstname[i] >= 'a' && firstname[i] <= 'z') {
			firstname[i] = firstname[i] - int('a' - 'A');

		}


	}
	size;

	size = CharacterSize(lastname);

	for (int i = 0; i < size; i++) {

		if (lastname[i] >= 'a' && lastname[i] <= 'z') {
			lastname[i] = lastname[i] - int('a' - 'A');

		}

	}

}
char* Name::fullName()
{
	int size;
	size = CharacterSize(firstname);

	int size2;
	size2 = CharacterSize(lastname);

	char* arr = new char[size + size2 + 2];

	for (int i = 0; i <= (size + size2 + 1); i++) {

		if (i < size) {
			arr[i] = firstname[i];


		}
		if (i == size) { arr[size] = ' '; }
		if (i > size && i < (size2 + size + 1)) {
			arr[i] = lastname[(i - size) - 1];

		}

		if (i == (size2 + size + 1)) { arr[i] = '\0'; }


	}

	return arr;
}

void Name::swapNames()
{
	int size;
	size = CharacterSize(firstname);

	int size2;
	size2 = CharacterSize(lastname);

	char* temparray;
	temparray = new char[size + 1];
	for (int i = 0; i <= size; i++) {

		temparray[i] = firstname[i];

	}


	setfirstname(lastname);
	setlastname(temparray);
	cout << "Numbers Swapped : " << endl;
}
