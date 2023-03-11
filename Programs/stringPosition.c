//#include<stdio.h>
//
//void main()
//{
//	int i = 0,pos,count = 0;
//	char str[100];
//	printf("Enter the string :");
//	fgets(str,sizeof(str),stdin);
//
//	printf("Enter the position of word you want to print :");
//	scanf_s("%d", &pos);
//
//	while (str[i] != '\0')
//	{
//		while (str[i] == ' ')
//		{
//			i++;
//		}
//
//		while (str[i] != ' ' && str[i] != '\n')
//		{
//			/*printf("%c",str[i]);*/
//
//			if (str[i + 1] == ' ' || str[i + 1] == '\n')
//			{
//				count++;
//				if (pos == count)
//				{
//		
//					while (str[i] != ' ' && str[i] != '\n')
//					{
//						printf("%c", str[i]);
//						i++;
//					}
//				}
//			}
//			/*if (str[i + 1] == ' ')
//			{
//				printf(" ");
//			}*/
//			i++;
//		}
//
//	}
//
//	
//}