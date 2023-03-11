//#include<stdio.h>
//#include<stdlib.h>
//
//void main()
//{
//	int i = 0,size = 1;
//	char* p = NULL, ch;
//
//	p = (char*)malloc(sizeof(char));
//	*p = '\0';
//
//	printf("Enter the string :");
//	do
//	{
//		scanf_s("%c",&ch);
//		while (ch != '\n')
//		{
//			size++;
//			p = (char*)realloc(p,size*sizeof(char));
//			*(p + i) = ch;
//			*(p + i + 1) = '\0';
//			i++;
//		}
//	} while (ch != '\n');
//
//	printf("%s",p);
//}