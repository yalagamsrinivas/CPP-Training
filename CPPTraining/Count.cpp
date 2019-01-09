#include <iostream>
#include<vector>

using namespace std;

int main()
{
	vector<bool> v_bData(10, false);

	for (int nItr = 0; nItr < 10; ++nItr)
	{
		if (rand() % 3 == 0)
		{
			v_bData[nItr] = true;
		}
	}

	cout << "Original Data: " << endl;
	for (auto &Data : v_bData)
	{
		cout << boolalpha << Data << " ";
	}
	cout << endl;

	cout << count(v_bData.begin(), v_bData.end(), true) << " elements are true" << endl;
	system("pause");
	return EXIT_SUCCESS;
}