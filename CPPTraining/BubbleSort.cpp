#include <iostream>

using namespace std;

template<typename DataType>
void Swap(DataType &X, DataType &Y)
{
	DataType Temp = X;
	X = Y;
	Y = Temp;
}


template<typename DataType>
void BubbleSort(DataType *Data, int nCount)
{
	for (int nRowItr = 1; nRowItr < nCount; ++nRowItr)
	{
		for (int nColItr = nCount - 1; nColItr >= nRowItr; --nColItr)
		{
			if (Data[nColItr - 1] > Data[nColItr])
			{
				Swap(Data[nColItr - 1] , Data[nColItr]);
			}
		}
	}
}

#pragma region  Solution-3
template<typename DataType>
void PrintData(DataType const &X)
{
	for (auto  Data : X)
	{
		cout << Data << "\t";
	}
	cout << endl;
}
#pragma endregion


int main()
{

	int nArray[7] = { 7, 5, 4, 3, 9, 8, 6 };
	double dArray[5] = { 4.3, 2.5, -0.9, 100.2, 3.0 };

	cout << "Unsorted Integer Array:" << endl;
	PrintData(nArray);
	BubbleSort(nArray, 7);
	cout << "Sorted Integer Array:" << endl;
	PrintData(nArray);

	cout << "Unsorted double Array:" << endl;
	PrintData(dArray);
	BubbleSort(dArray, 5);
	cout << "Sorted double Array:" << endl;
	PrintData(dArray);


	system("pause");
	return EXIT_SUCCESS;
}