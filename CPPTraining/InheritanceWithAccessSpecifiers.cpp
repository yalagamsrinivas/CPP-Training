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
};

class CDerivedClassPublic : public CBaseClass
{
public:
	int m_nDerivedClassPublicData;
private:
	float m_fDerivedClassPrivateData;
protected:
	double m_dDerivedClassProtectedData;

public:
	void SampleFunct( int nData)
	{
		m_nProtectedData = nData;
		//m_fPrivateData = 15.0f;
	}

};

class CDerivedClassProtected : protected CBaseClass
{
public:
	int m_nDerivedClassPublicData;
private:
	float m_fDerivedClassPrivateData;
protected:
	double m_dDerivedClassProtectedData;

public:
	void SampleFunct()
	{
		m_nProtectedData = 10;
		m_nData = 10;
		//m_fPrivateData = 15.0f;
	}
};


class CDerivedClassPrivate : private CBaseClass
{
public:
	int m_nDerivedClassPublicData;
private:
	float m_fDerivedClassPrivateData;
protected:
	double m_dDerivedClassProtectedData;
public:
	void SampleFunct()
	{
		m_nProtectedData = 10;
		m_nData = 10;
		//m_fPrivateData = 15.0f;
	}

};

int main()
{
	CDerivedClassPublic Obj;
	Obj.m_nData;
	Obj.m_fData;
	Obj.m_nDerivedClassPublicData;
	Obj.SampleFunct(10);
	/*Obj.m_nPrivateData;
	Obj.m_nProtectedData;*/


	CDerivedClassProtected Obj1;
	Obj1.m_nDerivedClassPublicData;
	//Obj1.m_nData;
	Obj1.SampleFunct();

	CDerivedClassPrivate Obj2;
	//Obj2.m_nData;
	Obj2.SampleFunct();

	system("pause");
	return EXIT_SUCCESS;
}