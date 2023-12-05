#include"Header.h"
int main() {
	
	cstring String1 = "Haise Kuragani\0";
	String1.display();

	cout << "The second cstring is " << endl;
	cstring String2(2,'n');

	String2.display();

	return 0;

}