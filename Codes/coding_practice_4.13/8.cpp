#include <iostream>

const int SIZE = 50;

struct pi
{
	char corpor[SIZE];
	float d;
	float weight;
};


int main()
{
	using namespace std;
	pi * a_pi = new pi;
	cout << "The diameter: ";
	(cin >> a_pi->d).get();
	cout << "Corporation: ";
	cin.getline(a_pi->corpor, SIZE);
	cout << "The weight: ";
	cin >> a_pi->weight;

	cout	<< "Info of the PI: \n"
		<< "Corporation: " << a_pi->corpor << endl
		<< "Diameter: " << a_pi->d << endl
		<< "Weight: " << a_pi->weight << endl;
	return 0;
}
