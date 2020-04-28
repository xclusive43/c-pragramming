#include<stdio.h>
int main()
{int a,b,c,average;
printf("enter the value of a:\nb:\nc:\n");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
if(a>b&&a>c)
   {
      printf("a is larger");
   }
if(b>a||b>c)
   {
      printf("b is larger");
   }
 else
 if(!(a>c))
      printf("c is larger");
   }

