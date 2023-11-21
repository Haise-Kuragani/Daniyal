#include"Helpfile.h"
using namespace std;
int CharacterSize(char* x) {
	int size = 0;

	while (x[size] != '\0') 
	{
		size++;
	}
	return size;

}
char* CopyFunction(char* y) {
	int size = 0;

	while (y[size] != '\0') 
	{
		size++;
	}

	char* newarr = new char[size + 1];
	for (int i = 0; i <= size; i++) {
		newarr[i] = y[i];
	}

	return newarr;


}