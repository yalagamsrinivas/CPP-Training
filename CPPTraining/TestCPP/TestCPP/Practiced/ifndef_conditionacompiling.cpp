#include <stdio.h>
#include <malloc.h>
#include<iostream>
using namespace std;

//#ifndef x;
//#define x;
//
//#endif

void add(int a[],int b[],int c[])
{
	for(int i=0;i<3;i++)
	{
		c[i]=a[i]+b[i];
	}
}

void main()
{

//#ifdef x
//	int y=10;
//	printf("dhgjhgfu%d",y);
//
//#else
//	int y=10;
//	printf("dhgjhgfu%d",y);
//
//#endif

	int a[3]={1,2,3},b[3]={1,2,3},c[3]={0};

	add(a,b,c);

	for(int i=0;i<3;i++)
	{
		cout<<c[i]<<endl;
	}

}

