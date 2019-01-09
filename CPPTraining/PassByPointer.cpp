/* Pass-by-reference using pointer (TestPassByPointer.cpp) */
#include <iostream>
using namespace std;

void square(int *);

int main() {
	int number = 8;
	cout << "In main(): " << &number << endl;  
	cout << number << endl;   // 8
	square(&number);          // Explicit referencing to pass an address
	cout << number << endl;   // 64
	system("pause");
	return EXIT_SUCCESS;
}

void square(int * pNumber) {  // Function takes an int pointer (non-const)
	cout << "In square(): " << pNumber << endl;  
	*pNumber *= *pNumber;      // Explicit de-referencing to get the value pointed-to
}