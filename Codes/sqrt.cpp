// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	double area;
	cout << "Input your home area in square feet: ";
	cin >> area;
	double side;

	side = sqrt(area);

	cout << "This is the side's longitude: " << side << " feet. \n";
	return 0;
}
