#include <iostream>

using namespace std;

class CBase
{
protected:
	int nX;
	int nY;

public:
	void Set(int nDataX, int nDataY)
	{
		nX = nDataX;
		nY = nDataY;
	}

	void Show()
	{
		cout << nX << "  " << nY << endl;
	}
};

class CDerived1 : public CBase
{
	int nK;

public:
	void SetK()
	{
		nK = nX	 * nY;
	}

	void ShowK()
	{
		cout << nK << endl;
	}
};

class CDerived2 : public CDerived1
{
	int nM;

public:

	void SetM()
	{
		nM = nX - nY;
	}

	void ShowM()
	{
		cout << nM << endl;
	}
};

int main()
{

	CDerived1 Obj1;
	CDerived2 Obj2;

	Obj1.Set(2, 3);
	Obj1.Show();
	Obj1.SetK();
	Obj1.ShowK();


	Obj2.Set(3, 4);
	Obj2.Show();
	Obj2.SetK();
	Obj2.ShowK();
	Obj2.SetM();
	Obj2.ShowM();

	system("pause");
	return EXIT_SUCCESS;
}