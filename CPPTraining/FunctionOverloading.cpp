#include <iostream>

using namespace std;

int ExampleFunc(int nData)
{
	return nData;
}

//void ExampleFunc(int nData)
//{
//	//return nData;
//}

double ExampleFunc(double dData)
{
	return dData;
}

float ExampleFunc(float fData)
{
	return fData;
}

int ExampleFunc(int nData1, int nData2)
{
	return nData1 + nData2;
}

int ExampleFunc(double nData1, int nData2)
{
	return nData1 + nData2;
}

int ExampleFunc(int nData1, double nData2)
{
	return nData1 + nData2;
}

int ExampleFunc(int *pData) // int ExampleFunc(int pData[])
{
	return *pData;
}

int ExampleFunc(int pData[], int nData)
{
	return *pData;
}

int main()
{
	ExampleFunc(1);
	float fData = 9.0;
	ExampleFunc(fData);
	ExampleFunc(9.0f);
	system("pause");
	return EXIT_SUCCESS;
}