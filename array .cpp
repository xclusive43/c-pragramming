#include<stdio.h>
int main()
{
	int array[50],size,i,largest;
	printf("\n enter them size of array:");
	scanf("%d", &size);
	printf("enter the element of the array:", size);
	for( i=0; i<size; i++)
	scanf("%d", &array[i]);
	largest=array[0];
	for(i=1; i<size; i++)
	{if (largest<array[i])
	largest=array[i];
	
	}
	printf("\n largest element present in the array is:%d", largest);
	return 0;
	
	}
