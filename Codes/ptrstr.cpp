// ptrstr.cpp -- using pointer to strings
#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char *bird = "wren"; // "wren"表示字符串地址，把字符串地址赋值给指针
	char *ps;

	cout << animal << " and "
	     << bird << "\n"
	     << "\n";
	cout << "Enter a kind of animal: ";
	cin >> animal;

	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << &animal << endl;
	cout << ps << " at " << (int *)ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	delete [] ps;
	return 0;
}
