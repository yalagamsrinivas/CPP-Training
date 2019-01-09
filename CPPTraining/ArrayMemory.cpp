/* Pointer and Array (TestPointerArray.cpp) */
#include <iostream>
using namespace std;

int main() {
	const int SIZE = 5;
	int numbers[SIZE] = { 11, 22, 44, 21, 41 };  // An int array

												 // The array name numbers is an int pointer, pointing at the
												 // first item of the array, i.e., numbers = &numbers[0]
	cout << &numbers[0] << endl; // Print address of first element (0x22fef8)
	cout << numbers << endl;     // Same as above (0x22fef8)
	cout << *numbers << endl;         // Same as numbers[0] (11)
	cout << *(numbers + 1) << endl;   // Same as numbers[1] (22)
	cout << *(numbers + 4) << endl;   // Same as numbers[4] (41)

#pragma region oneMore
	int numbers[] = { 11, 22, 33 };
	int * iPtr = numbers;
	cout << iPtr << endl;        
	cout << iPtr + 1 << endl;    
	cout << *iPtr << endl;       // 11
	cout << *(iPtr + 1) << endl; // 22 
	cout << *iPtr + 1 << endl;   // 12
#pragma endregion
}

