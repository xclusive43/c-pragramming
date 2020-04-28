#include<stdio.h>
int  main()
{int i,j;
char palin[10];
 printf("enter a string:\n");
 scanf("%s", &palin);
  for(j=0; palin[j]!='\0'; j++);
   j=j-1;
   i=0;
   while(i<=j)
   { if(palin[i]==palin[j])
   { i=i+1;
   j=j-1;
   }
   else{printf("the given string is:%s is not a palindrome", palin);
   exit(1);
   }
   } printf("the given string is :%s is a palindrome", palin);
}
