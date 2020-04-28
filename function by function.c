#include<stdio.h>
int intput(void );
int output(temp);
int main()
{
	char a;
	char temp,input,output;
 
	temp=input();
	temp=output(temp);
	
}
int input(void)
{
	int input;
	char temp;
	printf("enter a char value:\n");
	scanf("%s",&temp);
	return temp;
}
int output(temp)
{
	int output;
	printf("the char input was %s", temp);
}
