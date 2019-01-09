#include <iostream>

using namespace std;

enum E_Status
{
	eIdle = 0,
	eInUse = 1
};

class c1;
class c2
{
	E_Status m_oStatus;

public:
	void SetStatus(E_Status oStatus)
	{
		this->m_oStatus = oStatus;
	}

	E_Status CheckStatus(c1 obj);
};


class c1
{
	E_Status m_oStatus;

public:
	void SetStatus(E_Status oStatus)
	{
		this->m_oStatus = oStatus;
	}

	friend E_Status c2::CheckStatus(c1 obj);
};



E_Status c2::CheckStatus(c1 obj)
{
	E_Status oStatus = E_Status::eInUse;

	if ((obj.m_oStatus == E_Status::eIdle) || (this->m_oStatus == E_Status::eIdle))
	{
		oStatus = E_Status::eIdle;
	}

	return oStatus;
}

int main()
{
	c1 obj1;
	c2 obj2;

	obj1.SetStatus(E_Status::eInUse);
	obj2.SetStatus(E_Status::eInUse);

	if (obj2.CheckStatus(obj1) == E_Status::eInUse)
	{
		cout << "System in use" << endl;
	}
	else
	{
		cout << "one of the system is idle" << endl;
	}

	obj1.SetStatus(E_Status::eInUse);
	obj2.SetStatus(E_Status::eIdle);

	if (obj2.CheckStatus(obj1) == E_Status::eInUse)
	{
		cout << "System in use" << endl;
	}
	else
	{
		cout << "one of the system is idle" << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}