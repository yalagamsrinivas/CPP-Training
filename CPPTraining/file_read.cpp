#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main ( )
{
	string line;

	int i = 0;

	vector < string > v;

	ifstream fin;

	fin.open ("file.txt");

	if ( fin.is_open ( ))
	{
		while ( getline ( fin, line ))
		{
			stringstream ss ( line );

			while ( getline (ss ,line, ','))
			{
				v.push_back(line);
			}
		}

		while ( true )
		{
			if ( i == v.size())
			{
				break;
			}

			cout << v [ i ] << "\n";
			i++;
		}
	}
}
