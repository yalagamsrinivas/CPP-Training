#include <iostream>

using namespace std;

class CLoc
{
	int m_nLatitude;
	int m_nLongitude;

public:
	CLoc() : m_nLatitude(0), m_nLongitude(0)
	{
		
	}

	CLoc(int nLatitude, int nLongitude) : m_nLatitude(nLatitude), m_nLongitude(nLongitude)
	{
		
	}

	//return_Type operator typeofoperator(operator arguments)
#pragma region Binary operator overloading
	// Overloading + operator
	void operator +(CLoc Obj)
	{
		this->m_nLongitude = Obj.m_nLongitude + this->m_nLongitude;
		this->m_nLatitude = Obj.m_nLatitude + this->m_nLatitude;

		//return oTemp;
	}

	CLoc operator -(CLoc Obj)
	{
		CLoc oTemp;
		oTemp.m_nLongitude = this->m_nLongitude - Obj.m_nLongitude;
		oTemp.m_nLatitude = this->m_nLatitude - Obj.m_nLatitude;

		return oTemp;
	}

	CLoc operator *(CLoc Obj)
	{
		CLoc oTemp;
		oTemp.m_nLongitude = Obj.m_nLongitude * this->m_nLongitude;
		oTemp.m_nLatitude = Obj.m_nLatitude * this->m_nLatitude;

		return oTemp;
	}

	CLoc operator /(CLoc Obj)
	{
		CLoc oTemp;
		oTemp.m_nLongitude = this->m_nLongitude / Obj.m_nLongitude;
		oTemp.m_nLatitude = this->m_nLatitude / Obj.m_nLatitude;

		return oTemp;
	}

	CLoc operator /(double dValue)
	{
		CLoc oTemp;
		oTemp.m_nLongitude =  this->m_nLongitude / dValue;
		oTemp.m_nLatitude = this->m_nLatitude / dValue;

		return oTemp;
	}
#pragma endregion 

#pragma region Unaray operator overloading

#pragma region Prefix	
	CLoc operator ++()
	{
		this->m_nLongitude++;
		this->m_nLatitude++;

		return *this;
	}

	CLoc operator --()
	{
		this->m_nLongitude--;
		this->m_nLatitude--;

		return *this;
	}

#pragma endregion 

#pragma region PostFix
	CLoc operator++(int x)
	{
		/*int nData = this->Data + x;
		nData = nData + 1;
		return nData;*/
		++this->m_nLongitude;
		++this->m_nLatitude;

		return *this;
	}

	CLoc operator--(int x)
	{
		--this->m_nLongitude;
		--this->m_nLatitude;

		return *this;
	}
#pragma endregion 

#pragma endregion 

#pragma region Overloading Shorthand operators
	CLoc operator +=(CLoc Obj)
	{
		this->m_nLongitude += Obj.m_nLongitude;
		this->m_nLatitude += Obj.m_nLatitude;

		return *this;
	}

	CLoc operator -=(CLoc Obj)
	{
		this->m_nLongitude -= Obj.m_nLongitude;
		this->m_nLatitude -= Obj.m_nLatitude;

		return *this;
	}

	CLoc operator *=(CLoc Obj)
	{
		this->m_nLongitude *= Obj.m_nLongitude;
		this->m_nLatitude *= Obj.m_nLatitude;

		return *this;
	}

	CLoc operator /=(CLoc Obj)
	{
		this->m_nLongitude /= Obj.m_nLongitude;
		this->m_nLatitude /= Obj.m_nLatitude;

		return *this;
	}

	CLoc operator /=(double dValue)
	{
		this->m_nLongitude /= dValue;
		this->m_nLatitude /= dValue;

		return *this;
	}
#pragma endregion 

	void ShowLocation() const
	{
		cout << "Latitude : " << m_nLatitude << "\t" << "Longitude : " << m_nLongitude << endl;
	}
};

int main()
{
	CLoc Obj(10, 20);
	Obj.ShowLocation();

	CLoc Obj1(10, 20);

	Obj1 + Obj;
	Obj1.ShowLocation();

	/*++Obj;
	Obj.ShowLocation();

	Obj++;
	Obj.ShowLocation();

	int nData = 6;
	nData += 12;*/
	system("pause");
	return EXIT_SUCCESS;
}