#include<stdio.h>
void main()
{
	int choice;
	scanf("%d",&choice);
	switch (choice)
	{
	case 1:
		{
			printf("sunday");
		}
		break;
	case 2:
		{
			printf("monday");

		}
		break;
	case 3:
		{
			printf("tuesday");
		}
		break;
	default:
		{
			printf("invalid");
		}
		break;
	}
}