#include <iostream>

using namespace std;

class CNumber
{
protected:
	int m_nValue;

public:
	CNumber()
	{
		cout << "CNumber : constructor" << endl;
	}

	virtual ~CNumber()
	{
		cout << "CNumber : Destructor" << endl;
	}
	void SetValue(int nValue)
	{
		m_nValue = nValue;
	}

	virtual void Show() = 0;
};

class CHexType : public CNumber
{
public:
	CHexType()
	{
		cout << "CHexType : constructor" << endl;
	}

	~CHexType()
	{
		cout << "CHexType : Destructor" << endl;
	}
	void Show()
	{
		cout << hex << m_nValue << endl;
	}
};

class COctType : public CNumber
{
public:
	COctType()
	{
		cout << "COctType : constructor" << endl;
	}

	~COctType()
	{
		cout << "COctType : Destructor" << endl;
	}
	void Show()
	{
		cout << oct << m_nValue << endl;
	}
};

int main()
{
	CNumber *ptr = new COctType();
	ptr->SetValue(120);
	ptr->Show();
	delete ptr;





	//CHexType Obj;
	////Obj.SetValue(120);
	//ptr = &Obj;
	//ptr->SetValue(120);
	//ptr->Show();
	////Obj.Show();

	//COctType Obj1;
	//Obj1.SetValue(120);
	//ptr = &Obj1;
	//ptr->Show();
	//Obj1.Show();
	system("pause");
	return EXIT_SUCCESS;
}