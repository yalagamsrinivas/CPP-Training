#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<char, int> map_ASCIIValues;

	for (int nItr = 0; nItr < 26; ++nItr)
	{
		map_ASCIIValues['A' + nItr] = 65 + nItr;
	}
	char chData;
	cout << "Enter a Value : " << endl;
	cin >> chData;

	map<char, int>::iterator MapItr = map_ASCIIValues.find(toupper(chData));//it will give character name and corresponding ascii value

	if (MapItr != map_ASCIIValues.end())
	{
		cout << "The ASCII equivalent of " << MapItr->first << " : " << MapItr->second << endl;
	}
	else
	{
		cout << "Key not found in map" << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}