#include <iostream>
#include <cstring>
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
	CandyBar * snack = new CandyBar[3];
	strcpy(snack[0].brand, "Mocha Munch");
	snack[0].weight = 2.3;
        snack[0].heath = 350;
	strcpy(snack[1].brand, "M&M");
	snack[1].weight = 3.1;
        snack[1].heath = 200;
	strcpy(snack[2].brand, "Dove");
	snack[2].weight = 4.5;
        snack[2].heath = 800;
	for (int i = 0; i < 3; i++)
	{
		cout << "Brand: " << snack[i].brand << endl
	     	     << "Weight: " << snack[i].weight << endl
	     	     << "Healthy: " << snack[i].heath << endl;
	}
	return 0;
}
