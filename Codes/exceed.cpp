// exceed.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0
#include <climits>
int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " dollars and Sue has " << sue 
	     << " dollars deposited.\n"
	     << "Add $1 to each account.\nNow ";

	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue
	     << " dollars deposited.\nPoor sam!\n";
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue
	     << " dollars deposited.\nTake $1 from each account.\n Now ";
	sam = sam - 1;
	sue = sue - 1;

	cout << "Sam has " << sam << " dollars and Sue has " << sue
	     << " dollars deposited.\nLucky Sue!\n";
	return 0;
}
