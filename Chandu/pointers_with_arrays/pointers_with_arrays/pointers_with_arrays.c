#include<stdio.h>

int main()
{
	int i,a[5]={1,2,3,4,5};
	int *ptr=a;
	for(i=0;i<5;i++)
	{
		printf("%d ",*ptr);
		ptr++;
	}
	ptr=a;// Reset pointer to the beginning of the array
	for(i=0;i<5;i++)
	{
		printf("%d ",*(ptr+i));
		//printf("%d ",*(ptr++));

	}
}