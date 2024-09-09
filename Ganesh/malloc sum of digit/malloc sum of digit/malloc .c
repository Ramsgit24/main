#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	int *arr;
	int sum=0;
	printf("enter a value :");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("memory allocation is failed!\n");
		return 1;

	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	printf("some of elements is:%d\n",sum);
	free(arr);
	return 0;
}
