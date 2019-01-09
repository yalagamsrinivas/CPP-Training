#include <iostream>
using namespace std;

int main() 
{
	int number1 = 88, number2 = 22;

	// Create a pointer pointing to number1
	int * pNumber1 = &number1;  // Explicit referencing
	*pNumber1 = 99;             // Explicit dereferencing
	cout << *pNumber1 << endl;  
	cout << &number1 << endl;   
	cout << pNumber1 << endl;  
	cout << &pNumber1 << endl;  
	pNumber1 = &number2;        // Pointer can be reassigned to store another address

								// Create a reference (alias) to number1
	int & refNumber1 = number1;  // Implicit referencing (NOT &number1)
	refNumber1 = 11;             // Implicit dereferencing (NOT *refNumber1)
	cout << refNumber1 << endl;  
	cout << &number1 << endl;    
	cout << &refNumber1 << endl; 
	
	//refNumber1 = &number2;     
#pragma region refNumber1 = &number2
	// Error! Reference cannot be re-assigned
	// error: invalid conversion from 'int*' to 'int'
#pragma endregion

	refNumber1 = number2;        
	number2++;
	cout << refNumber1 << endl;  
	cout << number1 << endl;     
	cout << number2 << endl;    
	cout << refNumber1 << endl; 
	system("pause");
	return EXIT_SUCCESS;
}