#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL, *pos=NULL, *tail=NULL;
	int ch, e;
	while(1)
	{
		printf("\n1.Insert\n2.Display\n3.Exit");
		printf("\nenter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("\nenter data:\n");
				scanf("%d",&e);
				if(head==NULL)
				{
					head=(struct node*)(malloc(sizeof(struct node)));
					head->data=e;
					pos=head;
					tail=head;
				}
				else
				{
					tail->next=(struct node*)(malloc(sizeof(struct node)));
					tail=tail->next;
					tail->data=e;
				}
				break;
			}
			case 2:
			{
				pos=head;
				printf("\nthe elements are:\n");
				while(pos!=NULL)
				{
					printf("\t%d",pos->data);
					pos=pos->next;
				}
				break;
			}
			case 3:
			{
				printf("\ngoodbye :)");
				exit(0);
			}
		}
	}
}
