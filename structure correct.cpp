#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	
};
int main()
{
	struct student s;
	printf("enter the name :\n");
	scanf("%s", s.name);
	printf("enter the rollno:\n");
	scanf("%d",s.rollno);
	printf("name:%s\n",s.name);
	printf("rollno:%s\n",s.rollno);
	return 0;
}
