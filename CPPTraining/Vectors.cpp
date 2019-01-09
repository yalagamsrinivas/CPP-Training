#include <iostream>
#include<vector>

using namespace std;
#pragma region Display Data 
template<typename T>
void DisplayData(vector<T> v_Data)
{
	for (auto & Data : v_Data)
	{
		cout << Data << "\t";
	}
	cout << endl;

	for (int nItr = 0; nItr < v_Data.size(); ++nItr)
	{
		cout << v_Data[nItr] << "\t";
	}
}
#pragma endregion

#pragma region Accessing a vector through an Iterator
template<typename T>
void DisplayData(vector<T> v_Data)
{
	vector<T>::iterator VecItr = v_Data.begin();
	for (; VecItr != v_Data.end(); ++VecItr)
	{
		cout << *VecItr << "\t";
	}
	cout << endl;
}
#pragma endregion 


int main()
{
	vector<double> v_dData;
	DisplayData(v_dData);

	vector<int> v_nData(10);
	DisplayData(v_nData);

	vector<char> v_chData(10, 'a');
	DisplayData(v_chData);

	for (int nItr = 0; nItr < 15; ++nItr)
	{
		v_dData.push_back((double)rand()); 
		// => v_dData.resize(v_dData.size() + 1); v_dData[v_dData.size() - 1] = Data;
	}
	DisplayData(v_dData);

	vector<double> v_dData1 = v_dData;
	system("pause");
	return EXIT_SUCCESS;
}