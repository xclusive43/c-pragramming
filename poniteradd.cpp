//pointer module//
#include<stdio.h>
int main()
{
	int a=8;
	int *b;
	b=&a;
	printf("the value of 'a' is %d\nthe address of a is %d\n the real address of a is %d", a,b,&a);
}
