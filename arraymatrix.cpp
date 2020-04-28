#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10], i,j,m,n;
	printf("enter the order matrix:\n");
	scanf("%d %d", &m,&n);
	printf("enter the value of first matrix:\n");
	for (i=1;i<=m;i++)
	{ 
	  for (j=1;j<=n;j++)
	   {
	   	    printf("enter value if a[%d][%d]",i,j);
   		    scanf("%d",&a[i][j]);
	   }
	}
	printf("enter the value of second matrix\n");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{ 
		   printf("enetr value of b[%d][%d]",i,j);
		   scanf("%d", &b[i][j]);
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("\n sum of a[%d][%d]and b[%d][%d]=c[%d][%d]", i,j,i,j,c[i][j]);
		}
	}
	return 0;
}
