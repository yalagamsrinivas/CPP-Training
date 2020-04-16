#include<iostream>
using namespace std;

class Base
{
private: 
 int x;
protected:
 int y;
public:
 int z;

 virtual void A();
 void A();
 void B();
 void c();
};
class Derived : public Base
{
private: 
 int x;
protected:
 int y;
public:
 int z;

 virtual void A();
 void B();
 
};

void Base::A()
{
 z=1;
 y=2;
 x=3;
 cout<<"inside base A\n";
}
void Base::B()
{
 cout<<"inside base B\n";
}
void Derived::A()
{
 z=4;
 y=5;
 x=6;
 cout<<"inside Derived A\n";
}
void Derived::B()
{
 cout<<"inside Derived B\n";
}

int main()
{
 Base *Obj = new Base();
 Base *Obj = new Derived();
 Derived *Obj = new Derived();

 //Base().A();//we can call using just class name with bracket
 //cout << "inside Derived B\n"<< Base().z;

 (*Obj).A();
 (*Obj).B();

 int z1;

 z1= (*Obj).z;

 cout<<z1;

 return 0;
}