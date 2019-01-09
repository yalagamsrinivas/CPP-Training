#include <iostream>
#include <list>

using namespace std;

#pragma region Dispaly List content
template<typename T>
void DisplayData(list<T> l_Data, bool bIsForward = true)
{
	if (!bIsForward)
	{
		l_Data.reverse();
	}
	list<T>::iterator ListIterator =  l_Data.begin();

	while (ListIterator != l_Data.end())
	{
		cout << *ListIterator << "\t";
		++ListIterator ;
	}
	cout << endl;
	//iterator can not be decremented
	/*list<T>::iterator ListIterator1 = l_Data.end();
	while (ListIterator1 != l_Data.begin())
	{
		--ListIterator;
		cout << *ListIterator << "\t";
	}*/
}
#pragma endregion

int main()
{
	list<int> l_nData;
	DisplayData(l_nData);

	list<char> l_chData(15, 'b');
	DisplayData(l_chData);

	int nCounter = 5;
	while (nCounter)
	{
		l_nData.push_back(rand());
		--nCounter;
	}
	cout << "Displaying Data Forward:" << endl;
	DisplayData(l_nData);

	cout << "Displaying Data Backward:" << endl;
	DisplayData(l_nData, false);

	cout << "Sorting the Data : " << endl;
	l_nData.sort();
	DisplayData(l_nData);

	list<int> l_nData1;
	while (nCounter != 3)
	{
		l_nData1.push_back(rand());
		++nCounter;
	}
	cout << "New List Data : " << endl;
	DisplayData(l_nData1);
	l_nData1.sort();

	l_nData.merge(l_nData1);
	cout << "Merged Data : " << endl;
	DisplayData(l_nData);

	cout << "Contents of the Merged Buffer" << endl;
	DisplayData(l_nData1);


	system("pause");
	return EXIT_SUCCESS;
}