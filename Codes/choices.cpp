// choices.cpp -- array variations
#include <iostream>
#include <vector>
#include <array>
int main()
{
	using namespace std;

	double a1[4] = {1.2, 2.4, 3.6, 4.8};
	
	vector<double> a2(4);
	for(int i=0; i<4; i++)
	{
		a2[i] = 1.0 / ( 3.0 + 2 * i );
	}

	array<double, 4>a3 = {3.14, 2.72, 1.62, 1.41};
	array<double, 4>a4;
	a4 = a3;

	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl
	     << "a2[2]: " << a2[2] << " at " << &a2[2] << endl
	     << "a3[2]: " << a3[2] << " at " << &a3[2] << endl
	     << "a4[2]: " << a4[2] << " at " << &a4[2] << endl
	     << endl;

	a1[6] = 20.2;
	cout << "a1[6]: " << a1[6] << " at " << &a1[6] << endl
	     << "a3[2]: " << a3[2] << " at " << &a3[2] << endl
	     << "a4[2]: " << a4[2] << " at " << &a4[2] << endl
	     << endl;
	return 0;
}
	     
	     
