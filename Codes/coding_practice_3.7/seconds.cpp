// seconds.cpp -- convert seconds to x days, x hours, x minutes, x seconds form.
#include <iostream>
int main()
{
	using namespace std;
	const int Aday = 86400;
	const int Anhour = 3600;
	const int Aminute = 60;
	long seconds;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	cout << seconds << " seconds = "
	     << seconds / Aday << " days, "
	     << seconds % Aday /Anhour << " hours, "
	     << seconds % Anhour / Aminute << " minutes, "
	     << seconds % Aminute << " seconds.\n";
	return 0;
}
