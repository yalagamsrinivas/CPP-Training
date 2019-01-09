#include <iostream>
using namespace std;

void printr(int & i)
{ 
	std::cout << i << std::endl; 
}

void printcr(const int & i) 
{ 
	std::cout << i << std::endl; 
}


int main() {
	int x = 10;
	const int y = 15;
	printr(x);
	//printr( y ); // passing y as non-const reference discards qualifiers
	//printr( 5 ); // cannot bind a non-const reference to a temporary
	printcr(x); 
	printcr(y); 
	printcr(5); // all valid 
	system("pause");
	return EXIT_SUCCESS;
}