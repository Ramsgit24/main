/*#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==5||i==1||j==5)
			{
				printf("*");
			}
			printf(" ");
		}
	}
}*/
#include<stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("x");
        }
        printf(" ");
    }
    return 0;
}

