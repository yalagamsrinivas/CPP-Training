#include <iostream>

using namespace std;

class CBase
{
public:
	CBase()
	{
		cout << "CBase : Constructor" << endl;
	}

	 ~CBase()
	{
		cout << "CBase : Destructor" << endl;
	}
};

//class CBase1
//{
//public:
//	CBase1()
//	{
//		cout << "CBase1 : Constructor" << endl;
//	}
//
//	~CBase1()
//	{
//		cout << "CBase1 : Destructor" << endl;
//	}
//};

class CDerived : public CBase
{
public:
	CDerived()
	{
		cout << "CDerived : Constructor" << endl;
	}

	~CDerived()
	{
		cout << "CDerived : Destructor" << endl;
	}
};

//class CDerived1 : public CDerived
//{
//public:
//	CDerived1()
//	{
//		cout << "CDerived1 : Constructor" << endl;
//	}
//
//	~CDerived1()
//	{
//		cout << "CDerived1 : Destructor" << endl;
//	}
//};
//
//class CDerived2 : public CBase1, public CBase
//{
//public:
//	CDerived2()
//	{
//		cout << "CDerived2 : Constructor" << endl;
//	}
//
//	~CDerived2()
//	{
//		cout << "CDerived2 : Destructor" << endl;
//	}
//};
//
//class CDerived3 : public CBase1
//{
//public:
//	CDerived3()
//	{
//		cout << "CDerived3 : Constructor" << endl;
//	}
//
//	~CDerived3()
//	{
//		cout << "CDerived3 : Destructor" << endl;
//	}
//};
//
//class CDerived4 : public CDerived3, public CDerived
//{
//public:
//	CDerived4()
//	{
//		cout << "CDerived4 : Constructor" << endl;
//	}
//
//	~CDerived4()
//	{
//		cout << "CDerived4 : Destructor" << endl;
//	}
//};

int main()
{
	//CDerived4 Obj;
	CBase Obj;
	CBase *Obj1 = new CDerived();
	/*system("pause");
	return EXIT_SUCCESS;*/
	delete Obj1;
}