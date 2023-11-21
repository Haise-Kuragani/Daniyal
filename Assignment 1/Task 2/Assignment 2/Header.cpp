#include"Header"

void MyChar::setcharacter(char p)
{
	character = p;
}
char MyChar::getcharacter()
{
	return character;
}

void MyChar::Mychr()
{
	if (character >= 'a' && character <= 'z')
	{
		character = character - 32;
		cout << "Upercase Of your Character is :" << character << endl;
	}
	else
	{
		cout << "Characters enter already exist in upper case:" << endl;
	}
}

void MyChar::display()
{

	cout << "Your Value:" << character << endl;

}