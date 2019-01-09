#include <iostream>
#include <list>

using namespace std;

class CData
{
	int m_nData;

public:
	CData() : m_nData(0)
	{
		
	}

	CData(int nData) : m_nData(nData)
	{
		
	}

	int GetData() const 
	{
		return m_nData;
	}

	friend bool operator<(const CData &Ob1, const CData &Ob2);
	friend bool operator>(const CData &Ob1, const CData &Ob2);
	friend bool operator!=(const CData &Ob1, const CData &Ob2);
	friend bool operator==(const CData &Ob1, const CData &Ob2);
};

bool operator<(const CData &Ob1, const CData &Ob2)
{
	return Ob1.m_nData < Ob2.m_nData;
}

bool operator>(const CData &Ob1, const CData &Ob2)
{
	return Ob1.m_nData > Ob2.m_nData;
}
bool operator==(const CData &Ob1, const CData &Ob2)
{
	return Ob1.m_nData == Ob2.m_nData;
}

bool operator!=(const CData &Ob1, const CData &Ob2)
{
	return Ob1.m_nData != Ob2.m_nData;
}


void DisplayData(list<CData> l_Data)
{

	list<CData>::iterator ListIterator = l_Data.begin();

	while (ListIterator != l_Data.end())
	{
		cout << (*ListIterator).GetData() << "\t";
		++ListIterator;
	}
	cout << endl;
}

int main()
{
	list<CData> l_Data;

	for (int nItr = 0; nItr < 10; ++nItr)
	{
		l_Data.push_front(CData(rand()));
	}

	cout << "Displaying Contents : " << endl;
	DisplayData(l_Data);

	cout << "Sorted Data : " << endl;
	l_Data.sort();
	DisplayData(l_Data);

	cout << "Last Data : " << (l_Data.back()).GetData() << endl << endl;

	cout << "First Data : " << (l_Data.front()).GetData() << endl << endl;

	l_Data.erase(l_Data.begin());
	cout << "Deleting First element : " << endl;
	DisplayData(l_Data);
	l_Data.insert(l_Data.begin(), CData());	//insert at first elemnt	
	l_Data.insert(l_Data.begin(), 2, CData());
	cout << "After Inserting 2 Data elements : " << endl;
	DisplayData(l_Data);
	system("pause");
	return EXIT_SUCCESS;
}