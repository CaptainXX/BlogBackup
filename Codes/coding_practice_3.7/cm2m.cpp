// cm2m.cpp -- convert your height from cm to m
#include <iostream>
int main()
{
	using namespace std;

	int height;
	cout << "Input your height:    cm\b\b\b\b\b";
	cin >> height;
	const float Step = 100;
	
	cout << "Your height is " << height / Step << " m.\n";
	return 0;
}
