#include <stdio.h>

#define MAX 10

int list[MAX] = {1,8,4,6,0,3,5,2,7,9};

void display() {
   int i;
   printf("[");
	
   // navigate through all items 
   for(i = 0; i < MAX; i++) {
      printf("%d ",list[i]);
   }
	
   printf("]\n");
}

void InsertionSort() {
   

	//Insertion sort
	int i,j,k,temp,pos;

	for(i=1;i<MAX;i++)
	{
		temp=list[i];
		pos=i;

		while((pos>0) && (list[pos-1] > temp))
		{
           list[pos] = list[pos-1];
		   pos--;
		}
		if(pos!=i)
		{
         list[pos]=temp;
		}
		  
	}

	
}

void main()
{
   printf("Input Array: ");
   display();
   printf("\n");
	
   InsertionSort();
   printf("\nOutput Array: ");
   display();
}