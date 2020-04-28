#include<stdio.h>
int main()
{int name;
printf("enter the name:\n");
scanf("%d", &name);

switch (name)
{
	case 1: printf("ajay");
	break;
	default :printf("wrong input");
	break;
}
}
