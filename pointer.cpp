#include<stdio.h>
int main()
{ int a=12;
int *s;
 s=&a;
 printf("s=%d\n",s);
 s=s+1;
 printf("s=%d\n", s);
 float c=3.1;
float *b;
b=&c;
*b=3.10;
printf("c=%f\n", c);
}

  

