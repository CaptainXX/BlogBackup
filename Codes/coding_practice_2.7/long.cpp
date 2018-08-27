// long.cpp -- Input a distance in 'long' and this programm will turn it into feet.
#include <iostream>
int main()
{
	using namespace std;
	int l;
	cout << "Input a distance in 'long': ";
	cin >> l;
	int f;
	f = l * 220;
	cout << l << " long = " << f << " feet. \n";
	return 0;
}

