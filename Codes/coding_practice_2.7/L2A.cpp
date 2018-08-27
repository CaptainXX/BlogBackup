// L2A.cpp -- Convert light years into astronomical units.
#include <iostream>
double l2a(double l);
int main()
{
	using namespace std;
	double l;
	cout << "Enter the number of light years: ";
	cin >> l;
	double a;
	a = l2a(l);
	cout << l << " light years = " << a << " astronomical units.\n";
	return 0;
}

double l2a(double l)
{
	return l * 63240;
}
