////   application programmeto sort ll of student according to their marks  . 
//
//
//
//
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include<string.h>
//
//struct student
//{
//    int roll;
//    int mark;
//    int age;
//    char name[20] ;
//};
//
//
//struct node
//{
//    struct node *prev;
//    struct student *stud;
//    struct node *next;
//};
//
//
//
//
//
//struct node* createnode()
//{
//    int roll, mark, age;
//    char c[20];
//    struct node *newnode = NULL;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->stud = (struct student* )malloc(sizeof(struct student)) ;
//    if (newnode == NULL)
//        printf(" memory not allocated  \n  ");
//    else
//    {
//        printf(" enter roll :\n");
//        scanf_s("%d", &roll);
//        printf(" enter marks :\n");
//        scanf_s("%d", &mark);
//        printf(" enter age  :\n");
//        scanf_s("%d", &age);
//        getchar();
//        printf(" enter name: \n");
//        fgets(c,sizeof(c),stdin);
//        strcpy(newnode->stud->name,c);
//        newnode->stud->roll = roll;
//        newnode->stud->age = age;
//        newnode->stud->mark = mark;
//        newnode->next = NULL;
//        newnode->prev = NULL;
//    }
//    return newnode;
//}
//
//void cll(struct node **head1, struct node **head2)
//{
//    struct node* temp = NULL;
//    temp = createnode();
//    // printf(" hii ");
//
//    if (*head1 == NULL)
//    {
//        *head1 = temp;
//        *head2 = temp;
//    }
//    else
//    {
//        temp->prev = *head2;
//        (*head2)->next = temp;
//        *head2 = temp;
//    }
//}
//
//void dll(struct node *head)
//{
//    if (head == NULL)
//        printf(" linked list not avaialable ");
//    else
//    {
//        while (head != NULL)
//        {
//            printf("name is  : %s ",head->stud->name);
//            printf("roll : %d ", head->stud->roll);
//            printf("age : %d ", head->stud->age);
//            printf("marks  : %d ", head->stud->mark);
//
//
//       //     printf("division  : %c ", head->stud->div);
//            printf(" \n ");
//            head = head->next;
//        }
//    }
//}
//
//void dllrev(struct node *head)
//{
//    if (head == NULL)
//        printf(" linked list not avaialable ");
//    else
//    {
//        while (head != NULL)
//        {
//            printf("roll : %d ", head->stud->roll);
//            printf("age : %d ", head->stud->age);
//            printf("marks  : %d ", head->stud->mark);
//            printf(" \n ");
//            head = head->prev;
//        }
//    }
//}
//
//
//void sort(struct node* head1 , struct node* head2)
//{
//    struct node* temp1 =head1 ;
//    struct node* temp2 =head2 ;
//    struct node* temp = head1;
//    temp -> stud =  (struct student* )malloc(sizeof(struct student)) ;
//
//    if(head1 == NULL )
//        printf("  ll  not avaialable ") ;
//    else
//    {
//        while(temp1 != NULL )
//        {
//            temp2 = temp1 -> next  ;
//            while( temp2 != NULL )
//            {
//                if(temp1->stud->mark > temp2->stud->mark)
//                {
//                    temp->stud = temp1->stud ;
//                    temp1->stud = temp2->stud   ;
//                    temp2->stud  = temp->stud ;
//                }
//                temp2 = temp2->next;
//            }
//            temp1 = temp1 -> next ;
//        }
//    }
//}
//void main()
//{
//    int choice;
//    struct node *first = NULL;
//    struct node *last = NULL;
//    printf(" 1 . create linked list \n");
//    printf(" 2 . display linked list.\n");
//    printf(" 3 display reverse \n");
//    printf("  4 . sort according to marks .") ;
//    do
//    {
//        printf("\nenter your choice:\n");
//        scanf("%d", &choice);
//        switch (choice)
//        {
//        case 1:
//            cll(&first, &last);
//            break;
//        case 2:
//            dll(first);
//            break;
//        case 3:
//            dllrev(last);
//            break;
//        case 4 :
//            sort(first ,last );
//            break;
//        default :
//            printf(" invalid choice " ) ;
//        }
//    } while (choice != 0);
//    getch();
//}
//
//
