////doubly linked list
//
//#include<stdio.h>
//#include<stdlib.h>
//
//struct node
//{
//	struct node* prev;
//	int data;
//	struct node* next;
//};
//
//struct node* createNode()
//{
//	struct node* newNode = NULL;
//
//	newNode = (struct node*) malloc(sizeof(struct node));
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
//		newNode->prev = NULL;
//	}
//	return newNode; //this will return the address of newly created node from heap
//}
//
//struct node* createLinkedList(struct node** head1, struct node** head2)
//{
//	struct node* tempNode = NULL;
//
//	tempNode = createNode();
//
//	struct node* travnode = *head1,*head2; //*head means first node in main function
//
//	if (*head1 == NULL) //means if first node == NULL
//	{
//		(*head1) = tempNode;  //then newly crreated node is the first node
//		*head2 = tempNode; //last node in main
//	}
//	else
//	{
//		tempNode->prev = *head2;
//		(*head2)->next = tempNode;
//
//		(*head2) = tempNode;
//	}
//	
//}
//
//struct node* displayLinkedList(struct node* head)
//{
//	while (head != NULL)
//	{
//		printf("%d =>", head->data);
//		head = head->next;
//	}
//}
//
//
//struct node* displayReverseLinkedList(struct node* head)
//{
//	while (head != NULL)
//	{
//		printf("%d =>", head->data);
//		head = head->next;
//	}
//}
//
//
//void insertAtLast(struct node** head1,struct node** head2)
//{
//	// insert at last means simply creating linked list thus only call it
//	struct node* tempNode = NULL;
//	tempNode = createLinkedList(head1,head2); //CLL la fakt first cha addr pathavaycha thus
//									  // *head = first chi val									 //  head = first cha addr thus use onlu use head
//}
//
//void insertAtFirst(struct node** head) 
//{
//	// first create new node thus call createNode()
//	struct node* tempNode = NULL;
//	tempNode = createNode();
//	
//	//note - any insert op kartana changes adhi tyachya linking list madhe nahi ahe tyat karayche(means adhi jo navin node tayar kelaahe to bhara)
//	// in this case - tempNode
//
//	tempNode -> next = *head;  //navin node chya next madhe pahilya node cha addr takayche(*head)
//	*head = tempNode;        // first(*head) madhe navin node(tempnode) cha addr taka
//}
//
//int countNode(struct node* head)
//{
//	int count = 0;
//	struct node* travNode = head;
//	while (head != NULL)
//	{
//		count++;
//		head = head->next;
//	}
//	return count;
//}
//
//
//
//void main()
//{
//	struct node* first = NULL;
//	struct node* last = NULL;
//	int choice;
//	do
//	{
//	printf("\n1.Create Linked List\n");
//	printf("2.Display Linked List\n");
//	printf("3.Insert At First\n");
//	printf("4.Insert At Last\n");
//	printf("6.Delete At First\n");
//	printf("7.Delete At Last\n");
//	printf("8.Insert At Last using 2 pointer\n");
//	printf("9.Reverse\n");
//	printf("10.Display Linked List Reverse\n");
//	printf("0.Exit\n");
//
//	printf("Enter your choice :");
//	scanf_s("%d",&choice);
//
//	//Note - whenever we want to change no. of node orvchange the value inside the first node in main the always
//	//pass the (&first)
//	switch (choice)
//		{
//		case 1:createLinkedList(&first,&last);
//			break;
//		case 2:displayLinkedList(first);
//			break;
//		case 3:insertAtFirst(&first);
//			break;
//		case 4:insertAtLast(&first);
//			break;
//		case 5:insertAtPosition(&first);
//			break;
//		case 6:deleteAtFirst(&first);
//			break;
//		case 7:deleteAtLast(&first);
//			break;
//		case 8:deleteUsing2pointer(&first);
//			break;
//		case 9:reverse(first);
//			break;
//		case 10:displayReverseLinkedList(last);
//			break;
//		case 11:printf("Invalid Choice");
//			break;
//		}
//	} while (choice != 0);
//}