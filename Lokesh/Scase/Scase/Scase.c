#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		{
			printf("sunday \n");
		}
		break;

	case 2:
		{
			printf("monday \n");
		}
		break;
	case 3:
		{
			printf("tuesday \n");
		}

		break;
	case 4:
		{
			printf("wednes day \n");
		}
		break;
	case 5:
		{
			printf("friday \n");
		}
		break;
	default:
		{
			printf("in valid\n");
		}
	}
}