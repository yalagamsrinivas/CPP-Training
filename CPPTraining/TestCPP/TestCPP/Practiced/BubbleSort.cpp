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

void bubbleSort() {
   
	////Selection sort
	//int i,j,k,temp;

	//for(i=0;i<MAX;i++)
	//{
	//	for(j=i+1; j < MAX;j++)
	//	{
	//		if(list[i] > list[j])
	//		{
	//			temp=list[i];
	//			list[i]=list[j];
	//			list[j]=temp;
	//		}
	//	}
	//}

	//Selection sort
	int i,j,k,temp;

	for(i=0;i<MAX;i++)
	{
		for(j=1; j < MAX-i;j++)
		{
			if(list[j-1] > list[j])
			{
				temp=list[j-1];
				list[j-1]=list[j];
				list[j]=temp;
			}
		}
	}

	
}

void main()
{
   printf("Input Array: ");
   display();
   printf("\n");
	
   bubbleSort();
   printf("\nOutput Array: ");
   display();
}