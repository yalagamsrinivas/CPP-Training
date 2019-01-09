#include <iostream>

using namespace std;

class CShared
{
	static int stat_m_nData;
	int m_nData;

public:
	void SetData(int nData, int nStaticData)
	{
		m_nData = nData;
		stat_m_nData = nStaticData;
	}

	void ShowData()
	{
		cout << "Static Data : " << stat_m_nData << endl;
		cout << "Non Static Data : " << m_nData << endl;
	}
};
int CShared::stat_m_nData = 10;
int main()
{
	CShared Obj;
	Obj.ShowData();

	Obj.SetData(3, 5);
	Obj.ShowData();

	CShared Obj1;

	Obj1.ShowData();
	system("pause");
	return EXIT_SUCCESS;
}