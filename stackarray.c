#include<stdio.h>
#include<stdlib.h>
 void main()
 {
 	while(1)
 	{
 		int ch,e;
 		printf("\nMENU");
 		printf("\n1.Push\n2.Pop\n3.Display\n4.Find top\n5.Exit");
 		printf("\nEnter choice:\n");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1:
 			{
 				printf("\nEnter element to push:\n");
 				scanf("%d",&e);
 				push(e);
 				break;
 			}
 			case 2:
 				pop();
 				break;
 			case 3:
 				display();
 				break;
 			case 4:
 				findtop();
 				break;
 			case 5:
 			{
 				printf("Goodbye :)");
 				exit(0);
 			}
 		}
 	}
 }
