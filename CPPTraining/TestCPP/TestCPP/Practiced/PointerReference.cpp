// passing parameters by reference
#include <iostream>
using namespace std;

   int* getstring()
{
	int x=10;
	int *y=&x;
	cout << "address of x=" << *y ;
	return y;

}

int main ()
{
	int* s;
	 s= getstring();


	
 cout << "s=" << *s ;  


	
 
  return 0;
}