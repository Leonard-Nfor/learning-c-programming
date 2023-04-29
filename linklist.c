#include<stdio.h>
#include<stdlib.h>
void main()
{
struct node
{
	int data;
	struct node *next;
};
struct node *newnode, *heard, *ptr;
heard = 0;
int choice;
newnode = (struct node*)malloc(sizeof(struct node));/* typecasting here is optional */
printf("please enter data");
scanf("%d", &newnode -> data);
if (heard == 0)
{
	heard = ptr = newnode;
}
else
{
	ptr -> next = newnode;
	ptr = newnode;
}
printf("Do want to continue? (0, 1)");
scanf("%d", &choice);
/* This function print another node */
while (choice)
{
	newnode = (struct node*)malloc(sizeof(struct node));
}
/* This one traverse the data */
while (ptr != 0)
{
	printf("%d ", ptr -> data);
	ptr = ptr ->next;
}
}
