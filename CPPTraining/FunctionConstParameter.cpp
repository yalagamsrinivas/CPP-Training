/* Test Function const and non-const parameter (FuncationConstParameter.cpp) */
#include <iostream>
using namespace std;

int squareConst(const int);
int squareNonConst(int);
int squareConstRef(const int &);
int squareNonConstRef(int &);

int main() 
{
	int number = 8;
	const int constNumber = 9;
	cout << squareConst(number) << endl;
	cout << squareConst(constNumber) << endl;
	cout << squareNonConst(number) << endl;
	cout << squareNonConst(constNumber) << endl;

	cout << squareConstRef(number) << endl;
	cout << &constNumber << endl;
	cout << squareConstRef(9) << endl;
	//cout << squareNonConstRef(number) << endl;

	// cout << squareNonConstRef(constNumber) << endl;
#pragma region squareNonConstRef(constNumber)
	// error: invalid initialization of reference of
	//  type 'int&' from expression of type 'const int'
#pragma endregion
	system("pause");
	return EXIT_SUCCESS;
}

int squareConst(const int number) 
{
	// number *= number;  // error: assignment of read-only parameter
	return number * number;
}

int squareNonConst(int number) {  // non-const parameter
	number *= number;
	return number;
}

int squareConstRef(const int & number) {  // const reference
	//number *= number; error constant reference value can not be changed 
	return number * number;
}

int squareNonConstRef(int & number) {  // non-const reference
	return number * number;
}