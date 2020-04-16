#include<iostream>

void main()
{

	int* a = new int[10];
	delete[] a;// delete pointer having elemnets in array(dynamically allocated array)
	a = NULL; // a still exists, but it's a dangling pointer now, so we set it to NULL (or 0)

	int* p[6];



	for (int i = 0; i < 6; i++)
	{
		p[i] = new int();
	}

	//delete array of pointers
	for (int i = 0; i < 6; i++)
	{
		delete p[i];
	}
}