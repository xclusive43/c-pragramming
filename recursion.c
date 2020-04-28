#include<stdio.h>
void recursion(int count)
{
	printf("%d\n", count);
	recursion(count+1);
}
int main()
{
	recursion (1);
	return 0;
}
