#include<stdio.h>
#include<conio.h>
int main()
{ int subject;
printf("enter a digit:");
scanf("%d", &subject);

switch(subject)
{
	case 1:printf("maths");
		break;
	
	 case 2:printf("c programing");
		break;
	 
	 case 3:printf("electronics");
		break;
	 
	 case 4:printf("fundamental");
		break;
	 
	 case 5:printf("envionment & sociology");
		break;
	 
	 defalut : printf("wrong");
}
getch ();
}
