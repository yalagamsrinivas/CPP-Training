#include <iostream>
using namespace std;

class CBase1
{
protected:
	int nX;

public:
	void ShowX() const
	{
		cout << nX << endl;
	}
};

class CBase2
{
protected:
	int nY;

public:
	void ShowY() const
	{
		cout << nY << endl;
	}
};

class CDerived : public CBase1, public CBase2
{
public:
	void Set(int nDataX, int nDataY)
	{
		nX = nDataX;
		nY = nDataY;
	}
};

int main()
{
	CDerived Obj;

	Obj.Set(45, 67);

	Obj.ShowX();
	Obj.ShowY();
	system("pause");
	return EXIT_SUCCESS;
}