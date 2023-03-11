#include<stdio.h>
#include<stdlib.h>

struct node
{
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
	}
	return newNode; //this will return the address of newly created node from heap
}

struct node* createLinkedList(struct node** head)
{
	struct node* tempNode = NULL;

	tempNode = createNode();

	struct node* travnode = *head; //*head means first node in main function

	if (*head == NULL) //means if first node == NULL
	{
		*head = tempNode;  //then newly crreated node is the first node
	}
	else
	{
		while (travnode->next != NULL)
		{
			travnode = travnode->next;
		}

		travnode->next = tempNode;

	}
	
}

struct node* displayLinkedList(struct node* head)
{
	while (head != NULL)
	{
		printf("%d =>", head->data);
		head = head->next;
	}
}

void insertAtLast(struct node** head)
{
	// insert at last means simply creating linked list thus only call it
	struct node* tempNode = NULL;
    tempNode = createLinkedList(head); //CLL la fakt first cha addr pathavaycha thus
									  // *head = first chi val									 //  head = first cha addr thus use onlu use head
}

void insertAtFirst(struct node** head) 
{
	// first create new node thus call createNode()
	struct node* tempNode = NULL;
	tempNode = createNode();
	
	//note - any insert op kartana changes adhi tyachya linking list madhe nahi ahe tyat karayche(means adhi jo navin node tayar kelaahe to bhara)
	// in this case - tempNode

	tempNode -> next = *head;  //navin node chya next madhe pahilya node cha addr takayche(*head)
	*head = tempNode;        // first(*head) madhe navin node(tempnode) cha addr taka
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

void insertAtPosition(struct node** head)
{
	int pos,n,count = 0,i;
	struct node* tempNode = NULL;
	struct node* travNode = *head;
	
	n = countNode(*head);

	printf("Enter the position :");
	scanf_s("%d",&pos);

	if (pos == 1)
	{
		insertAtFirst(head);
	}
	else if (pos == n + 1) 
	{
		insertAtLast(head);
	}
	else
	{
		tempNode = createNode(head);  //address of first is in head.
		i = 1;
		while (i < pos - 1) // we can also use for loop
		{
			travNode = travNode->next;
			i++;
		}
		tempNode->next = travNode->next;
		travNode->next = tempNode;
	}
}

void deleteAtFirst(struct node** head)
{
	if (*head == NULL)   //if no node is present
	{
		printf("Linked List is not available");
	}
	else if ((*head)->next == NULL)  //if only one node is present
	{
		free(*head);
		*head = NULL;
	}
	else // if more than one nodes are present(2 or more)
	{
		struct node* temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

void deleteAtLast(struct node** head)
{
	struct node* travnode = *head;
	if (*head == NULL)  //if no node is present
	{
		printf("Linked List is not available");
	}
	else if ((*head)->next == NULL) //if one node is present
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		while (travnode->next->next != NULL)
		{
			travnode = travnode->next;
		}
		free(travnode->next);
		travnode->next = NULL;
	}
}

void deleteUsing2pointer(struct node** head)
{

	if (*head == NULL)  // if no node is present
	{
		printf("Linked List is not available");
	}
	else if ((*head)->next == NULL)  // if only one node is present
	{
		free(*head);
		*head = NULL;
	}

	else if ((*head) -> next -> next == NULL)  // if two nodes are present
	{
		free((*head) -> next -> next);
		(*head)->next = NULL;
	}

	else  //if more than two nodes are present
	{ 
		struct node* temp1 = *head, * temp2 = *head;
		while (temp2->next != NULL)
		{
			temp1 = temp1->next;
			temp2 = temp1->next;
		}
		free(temp2->next);
		temp1->next = NULL;
	}
}

void reverse(struct node* head)
{
	
	if (head == NULL)
	{
		return;
	}
	else
	{
		reverse(head->next);
		printf("%d <=", head->data);
	}
}

void main()
{
	struct node* first = NULL;
	int choice;
	do
	{
	printf("\n1.Create Linked List\n");
	printf("2.Display Linked List\n");
	printf("3.Insert At First\n");
	printf("4.Insert At Last\n");
	printf("6.Delete At First\n");
	printf("7.Delete At Last\n");
	printf("8.Insert At Last using 2 pointer\n");
	printf("9.Reverse\n");
	printf("0.Exit\n");

	printf("Enter your choice :");
	scanf_s("%d",&choice);

	//Note - whenever we want to change no. of node orvchange the value inside the first node in main the always
	//pass the (&first)
	switch (choice)
		{
		case 1:createLinkedList(&first);
			break;
		case 2:displayLinkedList(first);
			break;
		case 3:insertAtFirst(&first);
			break;
		case 4:insertAtLast(&first);
			break;
		case 5:insertAtPosition(&first);
			break;
		case 6:deleteAtFirst(&first);
			break;
		case 7:deleteAtLast(&first);
			break;
		case 8:deleteUsing2pointer(&first);
			break;
		case 9:reverse(first);
			break;
		case 10:printf("Invalid Choice");
			break;
		}
	} while (choice != 0);
}