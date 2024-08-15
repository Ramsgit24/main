#include<stdio.h>
int main()
{
	int i,j;
	int a[2][2]={{1,2},{3,4}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d-%d\n",a[i][j],*(*(a+i)+j));
			printf("%p-%d\n",&a[i][j],(*(a+i)+j));
		}
	}

}