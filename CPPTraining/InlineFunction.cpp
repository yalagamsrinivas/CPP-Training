#include <iostream>

using namespace std;

inline int Max(int nData1, int nData2)
{
	return nData1 > nData2 ? nData1 : nData2;
}

int main()
{
	cout << "Max of 10, 50 : " << Max(10, 50) << endl;
}