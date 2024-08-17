#include<stdio.h>
void main()

{
	char DD;
	scanf("%c",&DD);
	switch (DD)
	{
	case 'A':
		{
			printf("sunday\n");
		}
		break;
	case 'B':
		{
			printf("monday\n");
		}
		break;
	case 'C':
		{
			printf("tuesday\n");
		}
		break;
	case 'D':
		{
			printf("wednesday\n");
		}
		break;
	default :
		{
			printf("invalid\n");

		}
		break;
	}
}

