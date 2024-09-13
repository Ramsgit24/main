#include<stdio.h>
int main()
{
	char week;
	printf("ENTER THE CHARACTER IS\n");
	scanf("%c",&week);
	switch(week)
	{

	case 'S':
		{
			printf("Sunday\n");
		}
		break;
	case 'm':
		{
			printf("monday\n");
		}
		break;
	case 'T':
		{
			printf("Tuesday\n");
		}
		break;
	case 'w':
		{
			printf("wednesday\n");
		}
		break;
	case't':
		{
			printf("thursday\n");
		}
		break;
	case 'f':
		{
			printf("friday\n");
		}
		break;
	case 's':
		{
			printf("saturday\n");
		}
		break;
	default:
		{
			printf("INVALID WEEK\n");
		}
		break;
	}
}


