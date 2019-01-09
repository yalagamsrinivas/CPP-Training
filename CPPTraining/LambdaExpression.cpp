#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	double dData[] = {-0.001, 5.0251, -0.3, 9.365, 0.365, 89.5654};
	vector<double> v_dData;

	for (auto Data : dData)
	{
		v_dData.push_back(Data);
	}

	cout << "Before Transform : " << endl;

	for (auto &Data : v_dData)
	{
		cout << Data << "\t";
	}
	cout << endl;

	std::transform(v_dData.begin(), v_dData.end(), v_dData.begin(), 
		[](double dTempData)
		{
			return dTempData < 0 ? 0 : dTempData;
		});

	cout << "After Transform : " << endl;

	for (auto &Data : v_dData)
	{
		cout << Data << "\t";
	}
	cout << endl;

	//sorting
	sort(v_dData.begin(), v_dData.end(), [](const int& a, const int& b) -> bool
    {
        return a < b;
    });

	cout << "After Transform : " << endl;

	for (auto &Data : v_dData)
	{
		cout << Data << "\t";
	}
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}