#include"Header.h"
using namespace std;


int main()
{
    MyChar first_Object;
    char  p;
	
	

	cout << "Enter the value of MyNum :" << endl;
	cin >> p;

	first_Object.setcharacter(p);
	first_Object.getcharacter();
	first_Object.display();

	int size;
	cout << "Enter size" << endl;
	cin >> size;


	MyChar* Object_Array = new MyChar[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the value to be stored " << i << ":";
		cin >> p;
		Object_Array[i].setcharacter(p);
	}

	char options;
	cout << "Press Y for a upper and Lower case Change and Press N for exist " << endl;
	cin >> options;

	while (options == 'Y' ||options == 'y')
	{
		int index;
		cout << "Enter the Order Or INdex Value of the Character you want to perform Case Swap" << endl;
		cin >> index;
		cout << "Press L for Lower Case and U for Upper Case" << endl;
		cin >> options;
		if (options == 'l' || options == 'L')
		{
			Object_Array[index].MyNum();
		}
		else if (options == 'u' || options == 'U')
		{
			Object_Array[index].Mychr();
		}
		
	}


	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (Object_Array[i].getcharacter() > Object_Array[j].getcharacter())
			{
				char temp = Object_Array[i].getcharacter();
				Object_Array[i].setcharacter(Object_Array[j].getcharacter());
				Object_Array[j].setcharacter(temp);
			}
		}
	}

	cout << "Sorted Value" << endl;

	for (int i = 0; i < size; i++)
	{
		Object_Array[i].display();

	}



	return 0;
}