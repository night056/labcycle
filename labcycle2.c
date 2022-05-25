#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		struct node *prev;
		int data;
		struct node *next;
	};
	struct node *head=NULL, *pos=NULL, *tail=NULL;
	int ch, e,i=0,j=1,a;
	while(1)
	{
		printf("\n1.Insert\n2.Display(forward)\n3.display(reverse)\n4.Exit");
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
					tail->next->prev=tail;
					tail->next->data=e;
					tail=tail->next;
				}
				i++;
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
				pos=tail;
				printf("\nthe elements are:\n");
				while(pos!=NULL)
				{
					printf("\t%d",pos->data);
					pos=pos->prev;
				}
				break;
			}
			case 4:
			{
				printf("\ngoodbye :)");
				exit(0);
			}
		}
	}
}
