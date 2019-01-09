#include <iostream>

using namespace std;

class CBase
{
public:
	virtual void Funct()
	{
		cout << "This is Base class!!!" << endl;
	}
};

class CDerived1 : public CBase
{
public:
	void Funct()
	{
		cout << "This is Derived1 class!!!" << endl;
	}
};

class CDerived2 : public CBase
{
public:
	void Funct1()
	{
		cout << "This is Derived2 class!!!" << endl;
	}
};

class CBase1
{
public:
	virtual void StartDat()
	{
		cout << "In base class" << endl;
	}
};

class CDerivedBase : public CBase1
{
public:
	/*void StartDat()
	{
		cout << "In Derived class" << endl;
	}*/
};

int main()
{
	CBase1 *ptr1 = new CDerivedBase();
	ptr1->StartDat();
	CBase *ptr;

	system("pause");
	return EXIT_SUCCESS;
}