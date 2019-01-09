#include <iostream>

using namespace std;

class CExample
{
	int nData;
	float fData;

public:
	CExample() : nData(10), fData(0.0f)
	{

	}

	CExample(int nData, float fData) :nData(nData), fData(fData)
	{
		this->nData = nData;
		this->fData = fData;
	}
};


int main()
{
	int  nData(5);
	int *ptr = &nData;

	cout << "Size of class is : " << sizeof(CExample) << endl;

	CExample Obj;
	CExample Obj1(Obj);
	CExample Obj2 = Obj1;
	cout << "Size of class Obj : " << sizeof(Obj) << endl;
	cout << "Size of class Obj1 : " << sizeof(Obj1) << endl;
	cout << "Size of class Obj2 : " << sizeof(Obj2) << endl;

	CExample *pObj = new CExample();
	cout << "Size of class is1 : " << sizeof(pObj) << endl;

	delete pObj;

	system("pause");
	return EXIT_SUCCESS;
}