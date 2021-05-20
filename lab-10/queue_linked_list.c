#include <stdio.h>
#include <stdlib.h>

struct node
{
	int val;
	struct node *ptr;
}*front, *rear, *temp, *front1;


void insertion(int data);
void deletion();
void display();
void create();

int count = 0;

void main()
{
	int no, ch, e;

	printf("\n 1 - insertion");
	printf("\n 2 - Deletion");
	printf("\n 3 - Display");
	printf("\n 4 - Exit");
	
	create();
	while (1)
	{
		printf("\n choose option\n ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("Enter data : ");
			scanf("%d", &no);
			insertion(no);
			break;
		case 2:
			deletion();
			break;
		case 4:
			exit(0);
		case 3:
			display();
			break;
		
		default:
			printf(" Please enter proper  choice  ");
			break;
		}
	}
}

/* Create an empty queue */
void create()
{
	front = rear = NULL;
}

/* Enqueing the queue */
void insertion(int data)
{
	if (rear == NULL)
	{
		rear = (struct node *)malloc(1 * sizeof(struct node));
		rear->ptr = NULL;
		rear->val = data;
		front = rear;
	}
	else
	{
		temp = (struct node *)malloc(1 * sizeof(struct node));
		rear->ptr = temp;
		temp->val = data;
		temp->ptr = NULL;

		rear = temp;
	}
	
}

/* Displaying the queue elements */
void display()
{
	front1 = front;

	if ((front1 == NULL) && (rear == NULL))
	{
		printf("Queue is empty");
		return;
	}
	while (front1 != rear)
	{
		printf("%d ", front1->val);
		front1 = front1->ptr;
	}
	if (front1 == rear)
		printf("%d", front1->val);
}

/* Dequeing the queue */
void deletion()
{
	front1 = front;

	if (front1 == NULL)
	{
		printf("\n under flow\n");
		return;
	}
	else
		if (front1->ptr != NULL)
		{
			front1 = front1->ptr;
			printf("\n Deleted value : %d", front->val);
			free(front);
			front = front1;
		}
		else
		{
			printf("\n Deleted value : %d", front->val);
			free(front);
			front = NULL;
			rear = NULL;
		}
	
}

