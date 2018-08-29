// strtype4.cpp -- line input
#include <iostream>
#include <string>
#include <cstring>
int main()
{
	using namespace std;
	char charr[20];
	string str;

	cout << "Lenth of string in charr:\t" << strlen(charr) << endl;
	cout << "Lenth of string in str:\t" << str.size() << endl;
	
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20);
	cout << "You entered: " << charr << endl;
	
	cout << "Enter another line of text:\n";
	getline(cin, str);
	cout << "You entered: " << str << endl;

	cout << "Lenth of string in charr now:\t" << strlen(charr) << endl;
	cout << "Lenth of string in str now:\t" << str.size() << endl;

	return 0;
}
