#include<stdio.h>
	#include<stdlib.h>

	int main ()
	{
		int * buffer;

		/*get a initial memory block*/
		buffer = (int*) malloc (10*sizeof(int));
		if (buffer==NULL)
		{
			printf("Error allocating memory!");
			exit (1);
		}
		
		/*get more memory with realloc*/
		buffer = (int*) realloc (buffer, 20*sizeof(int));
		if (buffer==NULL)
		{
			printf("Error reallocating memory!");
			//Free the initial memory block.
			free (buffer);
			exit (1);
		}
		free (buffer);
		return 0;
	}