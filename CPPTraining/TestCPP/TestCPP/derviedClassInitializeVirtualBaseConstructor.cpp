#include <iostream>

class Foo {
public:
	Foo() : _value(0)
	{
		std::cout << "Constructor: Foo" << std::endl;
	}
	explicit Foo(int value) : _value(value)
	{
		std::cout << "Constructor: Foo with argument" << std::endl;
	}
	virtual void print() = 0;
protected:
	int _value;
};

class Bar : virtual public Foo {
public:
	Bar() :
		Foo(1), // Statement without effect. Will emit warning C4589 in Visual Studio 2015
		_value2(10)
	{
		std::cout << "Constructor: Bar" << std::endl;
	}
protected:
	int _value2;
};

struct Baz : public Bar {
	Baz() :
		Foo(2),
		Bar()
	{
		std::cout << "Constructor: Baz" << std::endl;
	}

	void print() { std::cout << "Print: Foo member variable: " << _value << "\tBar member variable: " << _value2 << std::endl; }
};

int main() {
	Baz baz;
	baz.print();
	return 0;
}