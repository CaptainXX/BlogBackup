// hexoct1.cpp -- show hex and octal literals
#include <iostream>
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;
	
	cout << "42 in decimal:\t" << chest << endl;
	cout << "0x42 in hex:\t" << waist << endl;
	cout << "042 in octal:\t" << inseam << endl;
	return 0;
}
