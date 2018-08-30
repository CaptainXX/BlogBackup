#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string fname, lname, name;
	
	cout << "Your first name? ";
	getline(cin, fname);
	cout << "Your last name? ";
	getline(cin, lname);
	
	name = lname + ", " + fname;
	cout << name << endl;
	return 0;
}
