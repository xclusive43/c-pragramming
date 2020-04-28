#include<stdio.h>
int main()
{
	int num=1234;
	int temp=0;
	int reve=0;
	while(num>0)
	{
		temp=num%10;
		reve=reve*10+temp;
		num=num/10;
		printf("rev %d",reve);
	}
	printf("rev %d:",reve);c
}
