#include<stdio.h>
int main()
{
	int i,a[5]={1,2,3,4,5};
	int *ptr[5]={a,a+1,a+2,a+3,a+4};
	for(i=0;i<5;i++)
	{
		printf("%d-%d-%d \n",ptr[i],*ptr[i],&ptr[i]);
		
	}
	for(i=0;i<5;i++)
	{
		printf("%d-%d\n",*(ptr+i),**(ptr+i));
	}
}