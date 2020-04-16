#include<iostream>
using namespace std;

class base
{
public:
	base()
	{
		cout<<"In base class constructor"<<endl;
	}
	virtual ~base()
	{
		cout<<"In base class desstructor"<<endl;
	}
}
;
class derived : public base
{
public:
	derived()
	{
		cout<<"In derived class constructor"<<endl;
	}
	~derived()
	{
		cout<<"In derived class desstructor"<<endl;
	}
}
;
void main()
{
	base *b;
	b=new derived;
	delete b;
	//derived d;
}