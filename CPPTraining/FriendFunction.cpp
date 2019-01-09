#include <iostream>
using namespace std;

class CSum
{
	int m_nDataA;
	int m_nDataB;
public:
	friend int sum(CSum obj);
	void SetData(int nDataA, int nDataB);
};

void CSum::SetData(int nDataA, int nDataB)
{
	this->m_nDataB = nDataB;
	this->m_nDataA = nDataA;
}

int sum(CSum obj)
{
	return obj.m_nDataA + obj.m_nDataB;
}

int main()
{
	CSum obj;
	obj.SetData(5, 10);
	cout << sum(obj) << endl;

	CSum obj1;
	obj1.SetData(50, 10);
	cout << sum(obj1) << endl;
	system("pause");
	return EXIT_SUCCESS;
}