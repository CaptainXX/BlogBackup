// latitude.cpp -- input a latitude by degrees, minutes and seconds.
#include <iostream>
int main()
{
	using namespace std;
	int degree, minute, second;
	const float Step = 60;
	cout << "Enter a latitude in degrees, minutes and seconds: \n"
	     << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	cin >> second;
	cout << degree << " degrees, "
	     << minute << " minutes, "
	     << second << " seconds = "
	     << ( degree + minute / Step + second / Step / Step )
	     << " degrees.\n";
	return 0;
}
