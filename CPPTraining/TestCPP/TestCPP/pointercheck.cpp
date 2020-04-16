#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{

	char *p="srinivas";
	//cout<<*(p+2)<<endl;


	typedef struct Temp
	{
		char* data;
		int size[3];
	}; 
	typedef struct Temp Temp;

	Temp* T;
	T=(Temp*)malloc(sizeof(Temp));
	T->data= (char*)malloc(sizeof(char)*2);
	T->size[0]=1;
	*(T->size+1)=10;
	*(T->size+2)=10;

	T->data[0]=1;
	*(T->data+1)=11;

	printf("name is %c\n",*(p+1));
	printf("name is %d",*(T->size+2));
	return 0;
}