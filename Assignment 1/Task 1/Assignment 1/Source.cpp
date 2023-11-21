#include "Header.h"
using namespace std;



int main()
{
	MyNum a;

	int n, size;
	cout << "Enter Number" << endl;
	cin >> n;

	a.setnum(n);
	a.getnum();
	a.display();

	cout << "Enter Total Number Of Number u wanna enter " << endl;
	cin >> size;

	MyNum* a1 = new MyNum[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Numbers " << endl;
		cin >> n;
		a1[i].setnum(n);
	}

	char change;
	int num1;
    int p;

	cout << "Enter Y if u want to change the number sign " << endl;
	cin >> change;
	while (change == 'y' || change == 'Y')
	{
		cout << "Enter the index from the Array of which sign of the number is to be changed " << endl;
		cin >> num1;

		cout << "Press 1 To Change Number to Negative And Press 2 To Change it to Positive " << endl;
		cin >> p;

		if (p == 1)
		{
			a1[num1].NegativeConvert();
		}
		else if (p == 2)
		{
			a1[num1].PositiveConvert();
		}
		 
		cout << "If u want to change any other Number sign press y if not press n";
		cin >> change;
		
	}
	cout << "Sorting of Your Array (Ascending Order)" << endl;
	
	
	MyNum temp;
	for (int i = 0; i < size ; ++i) {
		for (int j = 0; j < size ; ++j) {
			if (a1[i].getnum() < a1[j].getnum()) {
			    temp = a1[i];
				a1[i] = a1[j];
				a1[j] = temp;
			}
		}
	}
	cout << "Array is Sorted in Ascending Order " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a1[i].getnum();
	}
	cout << endl;
	// Desecending Order

	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (a1[i].getnum() > a1[j].getnum()) {
				temp = a1[i];
				a1[i] = a1[j];
				a1[j] = temp;
			}
		}
	}
	cout << "Array is Sorted in Descending Order " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a1[i].getnum();
	}


	delete[]a1;


	return 0;
}