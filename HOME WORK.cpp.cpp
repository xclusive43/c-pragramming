#include<stdio.h>
int main()
{
	int i;
	i=0;
char a[10];
printf("ENTER ANY CHARACTER THAT U WANT TO DISPLAY LIKE NAME OF ANY THING will display six times:\n");
scanf("%s", &a);
while(i<=5)
{
	printf("THE CHAR U HAVE ENTER IS:%s\n", a);
	i++;
	
}
return 0;
}
