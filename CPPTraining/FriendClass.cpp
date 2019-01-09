#include <iostream>

using namespace std;

class TwoValues
{
	int nData1;
	int nData2;

public:
	TwoValues() : nData1(0), nData2(0)
	{

	}


	TwoValues(int nData1, int nData2) : nData1(nData1), nData2(nData2)
	{

	}

	friend class Min;
};

class Min
{
public:
	int min(TwoValues obj)
	{
		return obj.nData1 < obj.nData2 ? obj.nData1 : obj.nData2;
	}

	int max(TwoValues obj)
	{
		return obj.nData1 > obj.nData2 ? obj.nData1 : obj.nData2;
	}
};


int main()
{
	TwoValues Obj(12, -9);

	Min objMin;
	cout << "Min Value : " << objMin.min(Obj) << endl;
	cout << "Max Value : " << objMin.max(Obj) << endl;
	system("pause");
	return EXIT_SUCCESS;
}