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
	int ch, e,i=0,j=1,a;
	while(1)
	{
		printf("\n1.Insert\n2.Display\n3.Count\n4.Search for an element\n5.Exit");
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
				printf("\nthe number of elements in the list are:%d",i);
				break;
			}
			case 4:
			{
				printf("\nenter an element which you would like to search for:\n");
				scanf("%d",&a);
				pos=head;
				while(pos!=NULL)
				{
					if(pos->data==a)
						printf("\nthe element you have entered is in position %d",j);
					j++;
					pos=pos->next;
				}
				break;
			}
			case 5:
			{
				printf("\ngoodbye :)");
				exit(0);
			}
		}
	}
}
