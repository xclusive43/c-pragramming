//fibonoccie serise//
#include<stdio.h>
int fibonacci(int num);
int main()
{
int num;
printf("enter a number:\t");
scanf("%d",&num);
fibonacci(num);
return 0;	
}
int fibonacci(int num)
{
int a,b,c,i;
a=0;
b=1;
i=1;
printf("%d\t%d",a,b);
while(i<=num)
{
c=a+b;
a=b;
b=c;
printf("\t%d",b);
i++;
}
}
