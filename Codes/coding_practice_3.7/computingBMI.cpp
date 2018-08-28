// computingBMI.cpp -- calculating your BMI based on height and weight
#include <iostream>
int main()
{
	using namespace std;
	int n_meter, n_centimeter, n_weight;
	const float Inch2meter = 0.0254;
	const float kilo2pound = 2.2;
	const float meter2centimeter = 100;	

	cout << "Your height's meter part is:\t m\b\b";
	cin >> n_meter;
	cout << "And the centimeter part is:\t  cm\b\b\b\b";
	cin >> n_centimeter;
	cout << "Your weight in kilogram is:\t   kg\b\b\b\b\b";
	cin >> n_weight;

	float n_height = n_meter + n_centimeter / meter2centimeter; 
	cout << "Your height in inch is\t"
	     << n_height / Inch2meter
	     << " Inch(s).\n"
	     << "And your weight in pounds is\t"
	     << n_weight * kilo2pound
	     << " Pound(s).\n"
	     << "Your BMI is\t"
	     << n_weight / ( n_height * n_height )
	     << endl;
	return 0;
}
