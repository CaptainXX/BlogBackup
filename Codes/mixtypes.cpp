// mixtypes.cpp -- some type combinations
#include <iostream>

struct a_y_e
{
	int year;
};

int main()
{
	using namespace std;
	a_y_e s01, s02, s03;
	s01.year = 1998;
	
	a_y_e * pa = &s02;
	pa->year = 1999;

	a_y_e trio[3];
	trio[0].year = 2003;
	
	cout << trio->year << endl;

	const a_y_e * arp[3] = { &s01, &s02, &s03 };
	cout << arp[1]->year << endl;

	const a_y_e ** ppa = arp;
	auto ppb = arp;

	cout << (*ppa)->year << endl;

	cout << (*(ppb + 1))->year << endl;
	return 0;
}
