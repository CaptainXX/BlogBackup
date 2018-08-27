// funs.cpp -- Using functions
#include <iostream>
void mice();
void run();
int main()
{
	mice();
	mice();
	run();
	run();
	return 0;
}

void mice()
{
	using std::cout;
	cout << "Three blind mice\n";
}

void run()
{
	using std::cout;
	cout << "See how they run \n";
}

