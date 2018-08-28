// population.cpp -- output the percentage of americans in the world's population
#include <iostream>
int main()
{
	using namespace std;
	long long worldpopulation, americans;
	cout << "Enter the world's population: ";
	cin >> worldpopulation;
	cout << "Enter the population of the US: ";
	cin >> americans;
	cout << "The population of the US is "
	     << (double) americans / (double) worldpopulation * 100
	     << "\% of the world population.\n";
	return 0;
}
