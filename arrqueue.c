#include<stdio.h>
#include<stdlib.h>
#define n 10
int front=-1, rear=-1;
int queue[n];

void enqueue(int);
void dequeue();
void display();

void main()
{
	while(1)
	{
		int ch;
		printf("\nMENU\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
		printf("\nChoose from the above options:");
		scanf("%d",&ch);
		int a;
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter element:");
				scanf("%d",&a);
				enqueue(a);
				break;
			}
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\nGoodbye :)");
				exit(0);
		}
	}
}

void enqueue(int x)
{
	if(rear==n-1)
		printf("\nQueue is full");
	else
	{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=x;
	}
}

void dequeue()
{
	if(front==-1)
		printf("\nQueue is empty");
	else
	{
		front++;
		if(front>rear)
			front=rear=-1;
	}
}

void display()
{
	int i;
	if(front==-1)
		printf("\nQueue is empty");
	for(i=front;i<=rear;i++)
		printf("%d\t",queue[i]);
}
