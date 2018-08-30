#include <iostream>
#include <array>
int main()
{
	using namespace std;
	array<float, 3> a_run;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter your grade of 40m-distance running("
		     << i + 1 <<"): ";
		cin >> a_run[i];
	}

	cout << "Times: 3\n";
	cout << "Average grade: " << (a_run[0] + a_run[1] + a_run[2]) / 3.0 
	     << endl;
	return 0;
}
