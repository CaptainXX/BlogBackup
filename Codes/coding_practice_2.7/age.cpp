// age.cpp -- Input your age and this will show your age in months.
#include <iostream>
int main()
{
	using namespace std;
	int age;
	cout << "Enter your age: ";
	cin >> age;
	int month;
	month = age * 12;
	cout << "You have experienced " << month << " months.\n";
	return 0;
}

