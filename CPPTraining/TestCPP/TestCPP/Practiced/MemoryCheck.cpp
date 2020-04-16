#include<iostream>
#include<stdio.h>
using namespace std;
 
class Test {
    int value;
public:
    Test(int v = 0) {value = v;}
     
    // We get compiler error if we add a line like "value = 100;"
    // in this function.
    int getValue()  {
		value=5;
		return value;}  
};
 
int main() {
 //   Test t(20);

	//int a[4]={0};
 //  // cout<<t.getValue();


	//const int tt =10;

	//cout<<&tt;

//char a[6],*b;
//b=(char *)malloc(sizeof(char)*5);
//
//printf("the the value");
//scanf("%s",b);
//
//printf("the the value  %s",b);

	const int size=10;

	int a[size];

    return 0;
}


//int ext_var;
//extern int ext_var=10;
//
//static int  x;
// 
//int main()
//{
//
//	extern int ext_var=10;
//	/*extern int ext_var;
//	ext_var = 10;*/
//
//	static int  x=10;
//	
//    return 0;
//}