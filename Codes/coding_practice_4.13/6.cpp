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
	CandyBar snack[3] =
	{
		{"Mocha Munch", 2.3, 350},
		{"M&M", 3.1, 200},
		{"Dove", 4.5, 800}
	};
	for (int i = 0; i < 3; i++)
	{
		cout << "Brand: " << snack[i].brand << endl
	     	     << "Weight: " << snack[i].weight << endl
	     	     << "Healthy: " << snack[i].heath << endl;
	}
	return 0;
}
