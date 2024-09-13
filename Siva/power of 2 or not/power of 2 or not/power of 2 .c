//#include<stdio.h>
//int main()
//{
//	int num,status,count=0;
//	printf("enter the number\n");
//	scanf("%d",&num);
//	for( ;num;num&=(num-1))
//	{
//		count++;
//	}
//	if(count==1)
//	{
//		printf("power of 2\n");
//	}
//	else
//	{
//		printf("not a power of 2\n");
//	}
//	return status;
//}

#include<stdio.h>
int main()
{
	int num;
	printf("enter the number: ");
	scanf("%d",&num);
	while(num%2==0)
	{
		num=num/2;
	}
	if(num==1)
	{
		printf("the power of 2\n");
	}
	else
	{
		printf("the not power of 2\n");
	}
}








