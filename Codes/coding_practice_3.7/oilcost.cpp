// oilcost.cpp -- calculating the cost of oil
#include <iostream>
int main()
{
	using namespace std;
	float kilometer, liter;
	cout << "Enter the distance in km: ";
	cin >> kilometer;
	cout << "Enter the oil cost of the distance in liter: ";
	cin >> liter;
	cout << "The oil cost of your car is: "
	     << liter / kilometer * 100
	     << "L/100km.\n";
	return 0;
}

