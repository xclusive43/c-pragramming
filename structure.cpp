#include<stdio.h>
#include<string.h>
 struct  student
{ int student_no;
char student_name[15];
char student_desig[10];
char student_stream[10];
};
//int student, student_no,student_stream,student_name,student_designation;
int main()
{
   student st;
   int n;
   
   do
   {
   
		printf("enter student_no:\n");
		scanf("%d", st.student_no);
		printf("enter student_name:\n");
		scanf("%s", st.student_name);
		printf("enter student_designation:\n");
		scanf("%s", st.student_desig);
		printf("enter student_stream:\n");
		scanf("%s", st.student_stream);
			printf("you wana enter or exit\n");
   		printf("for exit press  99\n");
	}
	while(n!=99);

	return 0;
}

9
