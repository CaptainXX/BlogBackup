// oilcost.cpp -- calculating the cost of oil
#include <iostream>
int main()
{
	using namespace std;
	float kilometer, liter;
	const float km2mile = 0.6214;
	const float g2liter = 3.875;
	cout << "Enter the distance in km: ";
	cin >> kilometer;
	cout << "Enter the oil cost of the distance in liter: ";
	cin >> liter;
	float mpg = ( kilometer * km2mile ) / ( liter / g2liter );
	cout << "The oil cost of your car is: "
	     << mpg
	     << "mpg.\n";
	return 0;
}

