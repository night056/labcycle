 #include<stdio.h>
 #include<stdlib.h>

 void main()
 {
 	struct node
 	{
 		int data;
 		struct node *next;
 	};
 	struct node *top=NULL, *del=NULL,*new,*pos=NULL;
 	int ch,i=0;
 	while(1)
 	{
 		printf("\nMENU\n");
 		printf("\n1.push\n2.pop\n3.display\n4.find top\n5.exit");
 		printf("\n enter choice:\n");
 		scanf("%d",&ch);
 		int e;
	 	switch(ch)
	 	{
	 		case 1:
	 		{
	 			printf("\nenter data:\n");
	 			scanf("%d",&e);
	 			if(top==NULL)
	 			{
	 				top=(struct node*)malloc(sizeof(struct node));
	 				top->data=e;
	 			}	
	 			else
	 			{
	 				new=(struct node*)malloc(sizeof(struct node));
	 				new->next=top;
	 				new->data=e;
	 				top=new;
	 			}
	 			i++;
	 			break;
	 		}
	 		case 2:
	 		{
	 			del=top;
	 			top=top->next;
	 			free(del);
	 			i--;
	 			break;
	 		}
	 		case 3:
	 		{
	 			pos=top;
	 			printf("\nThe elements are:\n");
	 			while(pos!=NULL)
	 			{
	 				printf("\t%d",pos->data);
	 				pos=pos->next;
	 			}
	 			break;
	 		}
	 		case 4:
	 		{
	 			printf("\ntop is at position: %d",i);
	 			printf("\nelement at top is: %d",top->data);
	 			break;
	 		}
	 		case 5:
	 		{
	 			printf("\nGoodbye :)");
	 			exit(0);
	 		}
	 	}
	 }
}
