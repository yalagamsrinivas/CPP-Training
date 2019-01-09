#include <iostream>

using namespace std;

const int const_nSize = 10;


template<typename StackType>
class CStack
{
	StackType oStck[const_nSize];
	int nTos;

public:

	CStack() : nTos(0)
	{
		
	}

	CStack(int nNumbers) : nTos(nNumbers)
	{

	}

	void Push(StackType ob);

	StackType Pop();
};

template<typename StackType>
void CStack<StackType>::Push(StackType ob)
{
	if (nTos == const_nSize)
	{
		cout << "Stack is Full \n";
	}
	else
	{
		oStck[nTos] = ob;
		nTos++;
	}
}

template<typename StackType>
StackType CStack<StackType>::Pop()
{
	if (nTos == 0)
	{
		cout << "Stack is empty\n";
	}
	else
	{
		--nTos;
		return oStck[nTos];
	}
}


int main()
{

	CStack<char> CharStack(6);//6 means where to start inserting

	CharStack.Push('a');
	CharStack.Push('b');
	CharStack.Push('c');
	CharStack.Push('x');
	CharStack.Push('w');
	CharStack.Push('z');

	cout << "Character stack Data:" << endl;

	for (int nItr = 0; nItr < 3; ++nItr)
	{
		cout << CharStack.Pop() << endl;
	}

	CStack<int> IntegerStack;

	IntegerStack.Push(10);
	IntegerStack.Push(20);
	IntegerStack.Push(25);
	IntegerStack.Push(56);
	IntegerStack.Push(99);
	IntegerStack.Push(156);

	cout << "Integer stack Data:" << endl;
	for (int nItr = 0; nItr < 5; ++nItr)
	{
		cout << IntegerStack.Pop() << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}
