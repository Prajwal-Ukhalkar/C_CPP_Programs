//doubly linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node* prev;
	int data;
	struct node* next;
};

struct node* createNode()
{
	struct node* newNode = NULL;

	newNode = (struct node*) malloc(sizeof(struct node));

	int value;

	if (newNode == NULL)
	{
		printf("Unavailable");
	}
	else 
	{	
		printf("Enter the value :");
		scanf_s("%d", &value);
		newNode->data = value;
		newNode->next = NULL;
		newNode->prev = NULL;
	}
	return newNode; //this will return the address of newly created node from heap
}

struct node* createLinkedList(struct node** head1, struct node** head2)
{
	struct node* tempNode = NULL;

	tempNode = createNode();

	struct node* travnode = *head1; //*head means first node in main function
	/*struct node* travnode = *head2;*/
	if (*head1 == NULL) //means if first node == NULL
	{
		(*head1) = tempNode;  //then newly created node is the first node
		*head2 = tempNode; //last node in main is also the first node
	}
	else
	{
		tempNode->prev = *head2;
		(*head2)->next = tempNode;

		(*head2) = tempNode; // move tempNode forward means node newly created node is the last node
	}
	
}


int countNode(struct node* head)
{
	int count = 0;
	struct node* travNode = head;
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return count;
}

struct node* displayLinkedList(struct node* head)
{
	while (head != NULL)
	{
		printf("%d =>", head->data);
		head = head->next;
	}
}

struct node* displayReversedLinkedList(struct node* head)
{

	while (head != NULL)
	{
		printf("%d <=", head->data);
		head = head->prev;
	}
}

// *****INSERT OPERATIONS*****

void insertAtFirst(struct node** head1, struct node** head2) 
{
	struct node* tempNode = NULL;
	tempNode = createNode();
	//if no node then newly created node is the first node
	if (*head1 == NULL && *head2 == NULL)
	{
		*head1 = tempNode;
		*head2 = tempNode;

	}
	else
	{
		tempNode->next = *head1;
		(*head1) -> prev = tempNode;
		*head1 = tempNode; //update first to the newly addded node
	}
}

//insert at last means new node by default last la ch add hoil.so just simply call CLL()
void insertAtLast(struct node** head1, struct node** head2)
{
	struct node* tempNode = NULL;
	tempNode = createLinkedList(head1,head2);
}

void insertAtPosition(struct node** head1,struct node** head2)
{
	struct node* tempNode = NULL;
	struct node* travNode = *head1;
	int pos, n;
	printf("Enter at which position you want to add the data:\n");
	scanf_s("%d", &pos);
	 n = countNode(*head1);/* *head1 means it will count from first node*/

	 if (pos == 1)
	 {
		 insertAtFirst(head1,head2);
	 }
	 else if (pos == n + 1) //if last position
	 {
		insertAtLast(head1,head2);
	 }
	 else if (pos < 1 && pos > n + 1)
	 {
		 printf("Invalid position");
	 }
	 else
	 {
		 tempNode = createNode();
		 for ( int i = 1;  i < pos-1;  i++)
		 {
			 travNode = travNode->next;
		 }
		 //adhi navin node bharun ghene according to the standard rule

		 tempNode->next = travNode->next;
		 tempNode->prev = travNode;
		 travNode->next = tempNode;
		 tempNode->next->prev = tempNode;
	 }
}

// *****DELETE OPERATIONS*****

void deleteAtFirst(struct node** head1, struct node** head2)
{
	if (*head1 == NULL && *head2 == NULL)
	{
		printf("Linked list is not available");
	}
	//if only one node
	else if ((*head1)->next == NULL)
	{
		free(head1);
		*head1 = NULL;
		*head2 = NULL;
	}
	else
	{
		struct node* tempNode = *head1;
		(*head1)->next->prev = NULL;
		*head1 = (*head1)->next;
		free(tempNode);
		printf("First node is deleted successfully");
	}
}

void deleteAtLast(struct node** head1, struct node** head2)
{
	struct node* tempNode = *head2;
	(*head2)->prev->next = NULL;
	*head2 = (* head2)->prev;
	free(tempNode);
	printf("Last node is deleted successfully");
}

void deleteAtPosition(struct node** head1, struct node** head2)
{
	
}

void main()
{
	struct node* first = NULL;
	struct node* last = NULL;
	int choice;
	do
	{
	printf("\n1.Create Linked List\n");
	printf("2.Display Linked List\n");
	printf("3.Display Linked List Reverse\n");
	printf("4.Insert At First\n");
	printf("5.Insert At Last\n");
	printf("6.Insert at Position\n");
	printf("7.Delete at first\n");
	printf("8.Delete at last\n");
	printf("9.Delete at position\n");
	printf("0.Exit\n");

	printf("Enter your choice :");
	scanf_s("%d",&choice);

	//Note - whenever we want to change no. of node orvchange the value inside the first node in main the always
	//pass the (&first)
	switch (choice)
		{
		case 1:createLinkedList(&first,&last);
			break;

		case 2:displayLinkedList(first);
			break;
	
		case 3:displayReversedLinkedList(last);
			break;

		case 4:insertAtFirst(&first, &last);
			break;

		case 5:insertAtLast(&first,&last); /*&last beacaue if the position is n+1 then we have to simply call insertAtLast()*/
			break;

		case 6:insertAtPosition(&first,&last);
			break;

		case 7:deleteAtFirst(&first, &last); 
			break;

		case 8:deleteAtLast(&first,&last);
			break;

		case 9:deleteAtPosition(&first, &last);
			break;
		
		case 10:printf("Invalid Choice");
			break;
		}
	} while (choice != 0);
}