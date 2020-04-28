#include<stdio.h>
int add(int a, int b);
int main()
{ int num1, num2, sum;
printf("enter any two integer:");
scanf("%d %d", &num1, &num2);
sum=add(num1, num2);
printf("sum=%d", sum);
return 0;
} 
int add(int a, int b)
{ int add;
add=a+b;
return add;
}
