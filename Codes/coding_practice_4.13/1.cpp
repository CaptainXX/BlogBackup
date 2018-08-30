#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string fname, lname;
	cout << "Your first name? ";
	getline(cin, fname);
	cout << "Your last name? ";
	getline(cin, lname);
	
	char grade;
	cout << "What grade do you deserve? ";
	cin >> grade;

	unsigned int age;
	cout << "Your age? ";
	cin >> age;

	cout << "Name: " << lname << ", " << fname << endl
	     << "Grade: " << char(grade + 1) << endl
	     << "Age: " << age << endl;
	return 0;
}
