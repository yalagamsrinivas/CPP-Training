#include <iostream>

using namespace std;

template<typename Data1, class Data2>
void DummyFunction(Data1 FirstData, Data2 SecondData)
{
	cout << FirstData << "\t" << SecondData << endl;
}

int main()
{

	DummyFunction(10, "I Like C++");
	DummyFunction(10.65, 19L);///L wount print its like 0.3F
	system("pause");
	return EXIT_SUCCESS;
}