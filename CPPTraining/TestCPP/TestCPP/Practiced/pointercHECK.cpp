// passing parameters by reference
#include <iostream>
using namespace std;

 void getstring(int * arrayP[])
{
	
	cout<<"first addree value"<<arrayP[0]<<endl;
	cout<<"first value"<<*arrayP[0]<<endl;
	cout<<"first addree value"<<arrayP[0][1]<<endl;
	cout<<"first value"<<arrayP[0][1]<<endl;
	

}

int main ()
{
	
	int *p;

	p=(int *)malloc(sizeof(int)*1);

	for(int i=0;i<500;i++)
	{

		cout<<"the value"<<*p<<endl;
	}
	cout<<"the value"<<sizeof(p)<<endl;
	int y=2;
	// getstring();


	
}