#include <iostream>
#include <list>
#include<algorithm>

using namespace std;
double Reciprocal(double dData)
{
	return 1 / dData;
}


int main()
{
	list<double> l_Vals;

	for (int nItr = 0; nItr < 10; ++nItr)
	{
		l_Vals.push_back((double)nItr);
	}

	cout << "Original Content : " << endl;
	list<double>::iterator MapItr = l_Vals.begin();

	while (MapItr != l_Vals.end())
	{
		cout << *MapItr << " ";
		++MapItr;
	}
	cout << endl;

	transform(l_Vals.begin(), l_Vals.end(), l_Vals.begin(), Reciprocal);
	
	cout << "Transformed Content : " << endl;
	MapItr = l_Vals.begin();

	while (MapItr != l_Vals.end())
	{
		cout << *MapItr << " ";
		++MapItr;
	}
	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}