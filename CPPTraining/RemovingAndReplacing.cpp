#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	char str[] = "The STL is power Programming.";
	vector<char> v_chOriginalData, v_chDuplicateData(50);
	for (int nItr = 0; str[nItr]; ++nItr)
	{
		v_chOriginalData.push_back(str[nItr]);
		//cout << str[nItr]<<endl;//single character
	}

	cout << "Input Sequence : " << endl;
	for (auto &Data : v_chOriginalData)
	{
		cout << Data;
	}
	cout << endl;

	// Removing all spaces and copying into another vector
	remove_copy(v_chOriginalData.begin(), v_chOriginalData.end(), v_chDuplicateData.begin(), ' ');
	cout << "After removing space : " << endl;
	for (auto &Data : v_chDuplicateData)
	{
		cout << Data;
	}
	cout << endl;

	v_chDuplicateData.clear();
	v_chDuplicateData.resize(50);
	// Replacing all spaces with colons and copying into another vector
	replace_copy(v_chOriginalData.begin(), v_chOriginalData.end(), v_chDuplicateData.begin(), ' ', ':');
	cout << "After removing space : " << endl;
	for (auto &Data : v_chDuplicateData)
	{
		cout << Data;
	}
	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}