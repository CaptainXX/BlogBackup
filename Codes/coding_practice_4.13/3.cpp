#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	const int SIZE = 20;
	char fname[SIZE], lname[SIZE];	
	cout << "Your first name? ";
	cin.getline(fname, SIZE);
	cout << "Your last name? ";
	cin.getline(lname, SIZE);

	char name[SIZE] = {'\0'};
	strcat(name, lname);
	strcat(name, ", ");
	strcat(name, fname);
	cout << name << endl;
	return 0;
}
