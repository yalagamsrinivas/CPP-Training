// Do overloading as well

#include <iostream>

using namespace std;

template<typename Data>
void SwapArgs(Data &Data1, Data &Data2)
{
	cout << "Inside Swap" << endl;
	Data Temp = Data1;
	Data1 = Data2;
	Data2 = Temp;
}

int main()
{

	int nData1 = 10;
	int nData2 = 20;

	cout << "Before Swapping : " << "Data 1 : " << nData1 << " and Data 2 : " << nData2 << endl;
	SwapArgs(nData2, nData1);
	cout << "After Swapping : " << "Data 1 : " << nData1 << " and Data 2 : " << nData2 << endl;

	float fData1 = 10.0;
	float fData2 = 20.5f;

	cout << "Before Swapping : " << "Data 1 : " << fData1 << " and Data 2 : " << fData2 << endl;
	SwapArgs(fData2, fData1);
	cout << "After Swapping : " << "Data 1 : " << fData1 << " and Data 2 : " << fData2 << endl;

	char chData1 = 10;
	char chData2 = 20;

	cout << "Before Swapping : " << "Data 1 : " << chData1 << " and Data 2 : " << chData2 << endl;
	SwapArgs(chData1, chData2);
	cout << "After Swapping : " << "Data 1 : " << chData1 << " and Data 2 : " << chData2 << endl;
	system("pause");
	return EXIT_SUCCESS;
}