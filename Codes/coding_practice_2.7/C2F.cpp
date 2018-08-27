// C2F.cpp -- Convert Celsius into Fahrenheit.
#include <iostream>
float c2f(float c);
int main()
{
	using namespace std;
	float c;
	cout << "Please enter a Celsius value: ";
	cin >> c;
	float f;
	f = c2f(c);
	cout << c << " degrees Celsius is " << f << " degrees Fahrenheit.\n";
	return 0;
}

float c2f(float c)
{
	return 1.8 * c + 32.0;
}
