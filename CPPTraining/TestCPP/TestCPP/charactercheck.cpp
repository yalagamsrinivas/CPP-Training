
#include<iostream>
using namespace std;
void main()
{
	int *p;

	char *c="srinivas";

	int x=20;

	p=&x;

	cout<<sizeof(c)<<endl;
	cout<<sizeof(*c)<<endl;

	
	for (char i = 0; i < 127; i++)
	{
		cout << i;
		cout << endl;
	}
	for (char i = 0; i < 127; i++)
	{
		printf("%d", i);
		cout << endl;
	}
	//looping
	/*for (unsigned char i = 0; i < 256; i++)
	{
		printf("%d", i);
		cout << endl;
	}*/
	for (unsigned char i = 0; i < 255; i++)
	{
		printf("%d", i);
		cout << endl;
	}
	for (char i = 0; i < 255; i++)
	{
		printf("%d", i);
		cout << endl;
	}
}