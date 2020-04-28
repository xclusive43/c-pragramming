#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*ptr;
}*top,*top1,*temp;
int topelement();
void push(int data);
void pop();
void display();
void create();

int count=0;
int main()
{

	int no,ch;
    create();
	printf("1.push\n2.pop\n3.dispaly\n4.exit");
	while(1)
	{
		printf("enter ur choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the data:\n");
			       scanf("%d",&no);
				   push(no);
				   break;
			case 2:pop();
			        break;
			case 3:display();
			   break;
			   case 4:return 0;			   
			}
	}
}
void push(int data)

{
 if(top==NULL)	
{
	top=(struct node*)malloc(1*sizeof(struct node));
	top->ptr=NULL;
	top->info=data;
	
}
else
{
	temp=(struct node*)malloc(1*sizeof(struct node));
	temp->ptr=top;
	temp->info=data;
	top=temp;
}count++;
}
void display()
 { top1=top;
 if (top1==NULL)
 
{
	printf("null stack");
	
	
}
while(top1 !=NULL)
{
	printf("%d\t\n", top1->info);
	top1=top1->ptr;
}
 	
	 }	
 
void create()
{
	top=NULL;
}
void pop()
{
	top1=top;
	if (top1==NULL)
	{
		printf("NULL");
	}else
	{
		top1=top1->ptr;
		printf("popprd data is=%d\n",top->info);
		top=top1;
		free(top);
		count--;
	}
}
