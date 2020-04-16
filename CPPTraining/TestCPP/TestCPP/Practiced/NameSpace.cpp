#include<iostream>
#include"namespace1.h"
#include"namespace2.h"
using namespace std;

int main()
{

 int a,b,c;
 a=10,b=15;
 b=20;
 c=foo::add(a,b);
 cout<<c<<endl;
 c=foo::add2(a,b);
 cout<<c<<endl;

 c=goo::add(a,b);
 cout<<c<<endl;
 c=foo::add2(a,b);
 cout<<c<<endl;


}