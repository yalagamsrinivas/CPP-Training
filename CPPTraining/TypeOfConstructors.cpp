#include <iostream>

using namespace std;

class CModifiedExample
{
public:
	int m_nData;
	// Default constructor
	CModifiedExample() : m_nData(0)
	{

	}

	// Parameterized constructor
	CModifiedExample(int nData) : m_nData(nData)
	{

	}

	// Copy Constructor
	CModifiedExample(const CModifiedExample & Obj)
	{
		this->m_nData = Obj.m_nData;
	}

	// Copy Assignment operator
	/*CModifiedExample & operator= (CModifiedExample & obj)
	{
		this->m_nData = obj.m_nData;

		return *this;
	}*/
	/*CModifiedExample& operator= (CModifiedExample & obj)
	{
		this->m_nData = obj.m_nData*2;

		return *this;
	}*/
	/*void operator= (CModifiedExample & obj)
	{
		this->m_nData = obj.m_nData*2;		
	}*/
	/*CModifiedExample* operator= (CModifiedExample & obj)
	{
		this->m_nData = obj.m_nData*2;	
		return this;
	}*/
	CModifiedExample operator= (CModifiedExample & obj)
	{
		this->m_nData = obj.m_nData*2;	
		return *this;
	}
	// Destructor

	~CModifiedExample()
	{

	}
};

class CExample
{
public:
	int m_nData;
};

int main()
{
	/*CExample obj;
	cout << obj.m_nData << endl;
*/
	CExample *pObj = new CExample();

	pObj->m_nData = 50;
	cout << pObj->m_nData << endl;

	//CExample obj1 = 50;

	CModifiedExample obj1 = 100;
	cout << obj1.m_nData << endl;

	CModifiedExample obj2;
	obj2 = obj1;
	cout << obj2.m_nData << endl;
	system("pause");
	return EXIT_SUCCESS;
}