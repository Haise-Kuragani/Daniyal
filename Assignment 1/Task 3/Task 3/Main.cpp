#include"Header.h"
#include"Helpfile.h"

using namespace std;

int main()
{
	char a[20];
	char b[20];
	//Object 1
	cout << "Enter First Name : " << endl;
	cin >> (a);
	cout << "Enter Last Name : " << endl;
	cin >> (b);
	Name c1(a, b);
	c1.display();
	//Object 2
	cout << "Enter First Name : " << endl;
	cin >> (a);
	cout << "Enter Last Name : " << endl;
	cin >> (b);
	//Second Object
	Name c2(a, b);
	c2.display();
	cout << "After using camel : " << endl;
	c2.camelCase();
	cout << "After using swap : " << endl;
	c2.swapNames();
	//Third Object
	Name c3(c1);
	cout << "Copy Constructor : " << endl;
	cout << "After Lower Case : " << endl;
	c3.toLower();
	cout << "After Upper Case : " << endl;
	c3.toUpper();
	c3.display();

	return 0;
}
