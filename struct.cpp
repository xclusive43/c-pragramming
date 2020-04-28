#include<stdio.h>
#include<conio.h>
  main()
{
	struct student 
	{
		
		char name[9];
		char school_name[10];
		int rollno;
		
	}; 
	struct student1;
	printf("enter the name:\n");
	scanf("%s", &student1.name);
	printf("enter the schoolname:\n");
	scanf("%s", &student1 schoolname);	
	printf("enter the rollno:\n");
	scanf("%d", &student1 rollno);
	printf("your name is:%s\n your school_name is:%s\n your rollno is:%d\n", &name, &schoolname, &rollno );
	return 0;
}
