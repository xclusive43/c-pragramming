#include<stdio.h>
int main()
{int i, n;
 i=50;
printf("all the even between 50 and 70 including both 50 anfd 70:\n");
scanf("%d", &i);

while(i<=70)
{ if (i%2==0)
    {
          printf("%d\n", i++);
	}
  }
return 0;
}
