#include<stdio.h>
int main()
{ int i, j, k, sum, product, substract, division;
i=5;
j=2;
k=10;
product=++i * ++j;
sum=i++ + j++;
substract=--k - --i;
division=k--/j--;
printf("sum is :%d\n", sum);
printf("product is :%d\n", product);
printf("divison is :%d\n", division);
printf("substract is :%d\n", substract);

}
