#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

bool DivideBy3(int nData)
{
	bool bIsDivisable = false;
	if (nData % 3 == 0)
	{
		bIsDivisable = true;
	}
	return bIsDivisable;
}
int main()
{
	vector<int> v_nData;

	for (int nItr = 0; nItr < 10; ++nItr)
	{
		v_nData.push_back(rand());
	}

	cout << "Original Data: " << endl;
	for (auto &Data : v_nData)
	{
		cout << boolalpha << Data << " ";
	}
	cout << endl;

	cout << count_if(v_nData.begin(), v_nData.end(), DivideBy3)
		<< " elements are divisable by 3" << endl;
	system("pause");
	return EXIT_SUCCESS;
}