#include <iostream>

using namespace std;

class CBase
{
protected:
	int m_nData;

public:
	CBase() : m_nData(10)
	{
		cout << "CBase : Constructor" << endl;
	}

	~CBase()
	{
		cout << "CBase : Destructor" << endl;
	}
	void Test()//virtual void Test()
	{
		cout << "CBase : Inside Test Fuction" << endl;
	}
};

class CDerived1 : virtual public CBase
{
public:
	CDerived1()
	{
		cout << "CDerived1 : Constructor" << endl;
	}

	~CDerived1()
	{
		cout << "CDerived1 : Destructor" << endl;
	}
};

class CDerived2 : virtual public CBase
{
public:
	CDerived2()
	{
		cout << "CDerived2 : Constructor" << endl;
	}

	~CDerived2()
	{
		cout << "CDerived2 : Destructor" << endl;
	}
};


class CDerived3 : public CDerived1, public CDerived2
{
public:
	CDerived3()
	{
		cout << "CDerived3 : Constructor" << endl;
	}

	~CDerived3()
	{
		cout << "CDerived3 : Destructor" << endl;
	}

	int GetData() const
	{
		return m_nData;
	}
};


int main()
{
	CDerived3 *ptr = new CDerived3();
	ptr->Test();
	delete ptr;
	system("pause");
	return EXIT_SUCCESS;
}