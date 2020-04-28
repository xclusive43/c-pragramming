
/*
 * C Program to Implement a Stack using Linked List
 */
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;
 
 void enqueue();
 void dequeue();
 void display();
 void create();
int count = 0;
 
int main()
{
    int no, ch, e;
 
    printf("\n 1 - enqueue");
    printf("\n 2 - dequeue");
    printf("\n 3 - Dipslay");
    create();
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            enqueue();
            break;
        case 2:
            dequeue();
            break;
       
        case 3:display();
            break;
        case 4:
            exit(0);
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
 
/* Create empty stack */
void create()
{
    top = NULL;
}
void enqueue()
{
	int item;
	printf("ennter the element to be insert:\n");
	scanf("%d",&item);
	if(front==0 && rear==-1)
	{
		printf("over flow!!\n");		
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		q[rear]=item;
	}
	 else if (rear==size-1 && front!=0)
	 {
	 	rear=0;
	 	q[rear]=item;
	 }
	 else 
	 {
	 	rear++;
	 	q[rear]=item;
	 }
}
void dequeue()
{
	int element;
	if (front==-1)
	{
		printf("underflow queue\n");
	}
	element=q[front];
	 if (front==rear)
	front=rear=1;
	else
 
	{
		front++;
		printf("\nthe deleted element is:%d\n",element);
	}
	
}
void display()
{
	int i;
	if (front==-1)
	{
		printf("empty queue\n");
		
	}
	else
	{
		printf("\nthe elements in queue are:\n\n");
		for(i=front;i<=rear;i++)
		{
			printf("\t%d\n",q[i]);
		}
	}
}


 
  
