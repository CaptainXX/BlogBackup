// hexoct1.cpp -- show hex and octal literals
#include <iostream>
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;
	
	cout << dec << "42 in decimal:\t" << chest << endl;
	cout << hex << "42 in hex:\t" << waist << endl;
	cout << oct << "42 in octal:\t" << inseam << endl;
	return 0;
}
