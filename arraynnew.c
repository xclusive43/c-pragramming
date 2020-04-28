#include<stdio.h>
int main()
{
	int array[50],size,i,largest,n,j,a;
	printf("\n enter them size of array:");
	scanf("%d", &size);
	printf("enter %d element of the array:", size);
	for( i=0; i<size; i++)
	scanf("%d", &array[i]);
	for(i=0; i<size; i++)
	{ for ( j=i+1; i<size; j++)
	
	   { if (array[i]<array[j])
	       {  a=array[i];
	          array[i]=array[j];
	          array[j]=a;
			}
		}
	}
	printf("\n the no. arrange in ascending order given below:");
	for( i=0; i<size; i++)
	printf("%d\n", array[i]);
	return 0;
	
	}
	
