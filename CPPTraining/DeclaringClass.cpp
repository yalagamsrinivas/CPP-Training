
// Declaring Class and initializing Data members
#include <iostream>

using namespace std;

class CBaseClass
{
public:
	int m_nData;
	float m_fData;
private:
	int m_nPrivateData;
	float m_fPrivateData;
protected:
	int m_nProtectedData;
	float m_fProtectedData;

	CBaseClass()
	{

	}

	~CBaseClass()
	{

	}
};

int main()
{

	return EXIT_SUCCESS;
}