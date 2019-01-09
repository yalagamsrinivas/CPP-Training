/* Pass-by-reference using reference (TestPassByReference.cpp) */
#include <iostream>
using namespace std;

void square(int &);

int main() 
{
	int number = 8;
	cout << "In main(): " << &number << endl;  
	cout << number << endl;  // 8
	square(number);          // Implicit referencing (without '&')
	cout << number << endl;  // 64

	system("pause");
	return EXIT_SUCCESS;
}

void square(int & rNumber) {  // Function takes an int reference (non-const)
	cout << "In square(): " << &rNumber << endl;  // 0x22ff1c
	rNumber *= rNumber;        // Implicit de-referencing (without '*')
}