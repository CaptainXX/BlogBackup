// carrot.cpp -- food processing program
// uses and displays a variable.

#include <iostream>

int main()
{
	using namespace std;

	int carrots;

	carrots = 25;
	cout << "I have " << carrots << " carrots." << endl;
	carrots = carrots - 1;
	cout << "Crunch. Now I have " << carrots << " carrots." << endl;
	return 0;
}
