#include<stdio.h>
int sum(int a, int b);
int main()
{ int d=22,f=44,add;
add=sum(d,f);
printf("the sum is %d", add);
 

} int sum(int a,int b)
{
int sum;
sum=a+b;
 
return sum;
}
