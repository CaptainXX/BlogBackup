#include <iostream>

const int SIZE = 30;

struct CandyBar
{
	char brand[SIZE];
	float weight;
	int heath;

};

int main()
{
	using namespace std;
	CandyBar snack =
	{
		"Mocha Munch",
		2.3,
		350
	};
	cout << "Brand: " << snack.brand << endl
	     << "Weight: " << snack.weight << endl
	     << "Healthy: " << snack.heath << endl;
	return 0;
}
