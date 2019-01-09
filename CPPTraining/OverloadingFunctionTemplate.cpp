#include <iostream>

using namespace std;

template<typename X>
void F(X a)
{
	cout << "Inside Template function having single type \n";
}

void F(int a)
{
	cout << "Inside Int Type" << endl;
}

template<typename X, typename Y>
void F(X a, Y b)
{
	cout << "Inside Template function having two types \n";
}

int main()
{
	F(10);
	F('a');
	F(20, 30.7);
	system("pause");
	return EXIT_SUCCESS;
}