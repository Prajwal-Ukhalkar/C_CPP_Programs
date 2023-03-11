//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//    int data;
//    struct node* next;
//};
//
//struct node* createNode()
//{
//    struct node* newnode = NULL;
//    newnode = (struct node*)malloc(sizeof(struct node));
//    if (newnode == NULL)
//    {
//        printf("The memory is not allocated");
//    }
//    else
//    {
//        int val;
//        printf("Enter the value of the data:\n");
//        scanf("%d", &val);
//        newnode->data = val;
//        newnode->next = NULL;
//    }
//    return newnode;
//}
//
//
//void createLinkedList(struct node** head)
//{
//    struct node* tempnode = NULL, * travnode = *head;
//    tempnode = createNode();
//    if (*head == NULL)
//    {
//        *head = tempnode;
//    }
//    else
//    {
//        while (travnode->next != NULL)
//        {
//            travnode = travnode->next;
//        }
//        travnode->next = tempnode;
//    }
//}
//
//void displayLinkedList(struct node* begin)
//{
//    if (begin == NULL)
//    {
//        printf("Linked list is not available");
//    }
//    else
//    {
//        while (begin != NULL)
//        {
//            printf("%d ->", begin->data);
//            begin = begin->next;
//        }
//    }
//}
//void insertAtBegaining(struct node** head)
//{
//    struct node* tempnode = NULL;
//    tempnode = createNode();
//    tempnode->next = *head;
//    *head = tempnode;
//}
//
//void insertAtLast(struct node** head)
//{
//    createLinkedList(head);
//}
//
//int countNode(struct node* head)
//{
//    int count = 0;
//    while (head != NULL)
//    {
//        count++;
//        head = head->next;
//    }
//    return count;
//}
//void insertAtPosition(struct node** head)
//{
//    struct node* tempnode = NULL, * travnode = *head;
//    int pos, n;
//    printf("Enter at which position you want to add the data:\n");
//    scanf("%d", &pos);
//    n = countNode(*head);
//    if (pos == 1)
//    {
//        insertAtBegaining(head);
//    }
//    else if (pos == n + 1)
//    {
//        insertAtLast(head);
//    }
//    else if (pos<1 || pos>n + 1)
//    {
//        printf("Enter the valid position");
//    }
//    else
//    {
//        int i;
//        tempnode = createNode();
//        for (i = 1; i < pos - 1; i++)
//        {
//            travnode = travnode->next;
//        }
//        tempnode->next = travnode->next;
//        travnode->next = tempnode;
//    }
//}
//void deletionAtFirst(struct node** head)
//{
//    if (*head == NULL)
//    {
//        printf("Linked List is not available");
//    }
//    else if ((*head)->next == NULL)
//    {
//        free(*head);
//        *head = NULL;
//    }
//    else
//    {
//        struct node* temp = *head;
//        *head = (*head)->next;
//        free(temp);
//    }
//}
//
//void deletionAtlast(struct node** head)
//{
//    struct node* travnode = *head;
//    if (*head == NULL)
//    {
//        printf("Linked List is not available");
//    }
//    else if ((*head)->next == NULL)
//    {
//        free(*head);
//        *head = NULL;
//    }
//    else
//    {
//        while (travnode->next->next != NULL)
//        {
//            travnode = travnode->next;
//        }
//        free(travnode->next);
//        travnode->next = NULL;
//    }
//}
//
//void deletionUsing2pointer(struct node** head)
//{
//    struct node* temp1 = *head, * temp2 = *head;
//    while (temp2->next != NULL)
//    {
//        temp1 = temp1->next;
//        temp2 = temp1->next;
//    }
//    free(temp1->next);
//}
//void main(void)
//{
//    struct node* firstnode = NULL;
//    int choice;
//    do
//    {
//        printf("\n1.create linked list\n2.display linked list\n3.insertAtLast\n4.insertAtBegaining\n5.insertAtPosition\n6.deleteAtFirst\n7.deleteAtlast\n8.exit");
//        printf("\nEnter the choice you want :\n");
//        scanf("%d", &choice);
//        printf("\n");
//        switch (choice)
//        {
//
//        case 1: createLinkedList(&firstnode);
//            break;
//        case 2: displayLinkedList(firstnode);
//            break;
//        case 3: insertAtLast(&firstnode);
//            break;
//        case 4:insertAtBegaining(&firstnode);
//            break;
//        case 5:insertAtPosition(&firstnode);
//            break;
//        case 6:deletionAtFirst(&firstnode);
//            break;
//        case 7:deletionAtlast(&firstnode);
//            break;
//        case 8: exit(0);
//            break;
//        default:
//            printf("Enter the valid choice");
//        }
//    } while (choice != 0);
//}