#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
char* a="srinivas";
char b[100];

for(int i=0;i<strlen(a);i++)
{

b[i]=a[i];
}
cout<<b;
return 0;
}