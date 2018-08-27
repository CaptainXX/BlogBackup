// time.cpp -- Show inputed time in a better form
#include <iostream>
void showtime(int h, int m);
int main()
{
	using namespace std;
	int h, m;
	cout << "Enter the number of hours: ";
	cin >> h;
	cout << "Enter the number of minutes: ";
	cin >> m;
	showtime(h, m);
	return 0;
}

void showtime(int h, int m)
{
	using std::cout;
	using std::endl;
	cout << "Time: " << h << ":" << m << endl;
}
