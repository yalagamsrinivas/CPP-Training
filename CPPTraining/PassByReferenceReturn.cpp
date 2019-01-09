/* Passing back return value using reference (TestPassByReferenceReturn.cpp) */
#include <iostream>
using namespace std;

int & squareRef(int &);
int * squarePtr(int *);

int main()
{
	int number1 = 8;
	cout << "In main() &number1: " << &number1 << endl;  
	int & result = squareRef(number1);
	cout << "In main() &result: " << &result << endl;  
	cout << result << endl;   // 64
	cout << number1 << endl;  // 64

	int number2 = 9;
	cout << "In main() &number2: " << &number2 << endl;  
	int * pResult = squarePtr(&number2);
	cout << "In main() pResult: " << pResult << endl;  
	cout << *pResult << endl;   // 81
	cout << number2 << endl;    // 81
	system("pause");
	return EXIT_SUCCESS;
}

int & squareRef(int & rNumber) {
	cout << "In squareRef(): " << &rNumber << endl;  
	rNumber *= rNumber;
	return rNumber;
}

int * squarePtr(int * pNumber) {
	cout << "In squarePtr(): " << pNumber << endl;  
	*pNumber *= *pNumber;
	return pNumber;
}