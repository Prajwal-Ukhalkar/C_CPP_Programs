//#include<stdio.h>
//#include<stdlib.h>
//
//struct node
//{
//	int data;
//	struct node* next;
//};
//
//struct node* createNode()
//{
//	struct node* newNode = NULL;
//
//	newNode = (struct node*)malloc(sizeof(struct node));
//
//	int value;
//
//	if (newNode == NULL)
//	{
//		printf("Unavailable");
//	}
//	else
//	{
//		printf("Enter the value :");
//		scanf_s("%d", &value);
//		newNode->data = value;
//		newNode->next = NULL;
//	}
//	return newNode; //this will return the address of newly created node from heap
//}
//
//struct node* createLinkedList(struct node** head)
//{
//	struct node* tempNode = NULL;
//
//	tempNode = createNode();
//
//	struct node* travnode = *head; //*head means first node in main function
//
//	if (*head == NULL) //means if first node == NULL
//	{
//		*head = tempNode;  //then newly crreated node is the first node
//	}
//	else
//	{
//		while (travnode->next != NULL)
//		{
//			travnode = travnode->next;
//		}
//
//		travnode->next = tempNode;
//
//	}
//
//}
//
//struct node* displayLinkedList(struct node* head)
//{
//	printf("Original Linked list is :");
//	while (head != NULL)
//	{
//		printf("%d =>", head->data);
//		head = head->next;
//	}
//
//
//}
//
//struct node* displaySortedLL(struct node* head)
//{
//	/*printf("Welcome is sorted linked list");
//	struct node* temp;
//
//	while (head != NULL)
//	{
//		struct node* p1 = head;
//		struct node* p2 = head->next;
//		while (p2 != NULL)
//		{
//			if (p1->data > p2->data)
//			{
//				temp = p1->data;
//				p1->data = p2->data;
//				p2->data = temp;
//			}
//			p2 = p2->next;
//		}
//		head = head->next;
//	}*/
//	struct node* p1 = head;
//	struct node* p2 = head;
//	int temp;
//
//	for ( p1;p1 != NULL; p1 = p1 -> next)
//	{
//		for ( p2; p2 != NULL; p2 = p2->next)
//		{
//			if (p1->data > p2 -> data)
//			{
//				temp = p1->data;
//				p1->data = p2->data;
//				p2->data = temp;
//			}
//		}
//
//	}
//	printf("Sorted list\n :");
//	while (head != NULL)
//	{
//		printf("%d =>", head->data);
//		head = head->next;
//	}
//}
//
//
//void main()
//{
//	struct node* first = NULL;
//	int choice;
//	do
//	{
//		printf("\n1.Create Linked List\n");
//		printf("2.Display Linked List\n");
//		printf("2.Display sorted Linked List\n");
//
//		printf("Enter your choice :");
//		scanf_s("%d", &choice);
//
//		//Note - whenever we want to change no. of node orvchange the value inside the first node in main the always
//		//pass the (&first)
//		switch (choice)
//		{
//		case 1:createLinkedList(&first);
//			break;
//
//		case 2:displayLinkedList(first);
//			break;
//
//		case 3:displaySortedLL(first);
//			break;
//		
//		}
//	} while (choice != 0);
//}