//#include<stdio.h>
//int main()
//{
//	int a,b,sum;
//	//sum=a+b;
//	printf("enter the values");
//	scanf("%d",&a);
//	printf("enter the value");
//	scanf("%d",&b);
//	sum=a+b;
//	printf("%d the sum of numbers%d and is  %d\n",a,b,sum);
//}
//

//#include<stdio.h>
//int main()
//{
//	int i,sum;
//	printf("enter value ");
//	scanf("%d",&i);
//	sum=(i*(i+1)/2);
//	printf("sum of numbers are :%d ",sum);
//}


#include<stdio.h>
int digits()
{
	int i,r,sum=0;
	printf("enter the value");
	scanf("%d",&i);

	while(i>0)
	{
		r=i%10;
		sum=sum+r;
		i=i/10;
	}
	//printf("the sum of digits are : %d",sum);
}
int main()
{
	int i;
	i=digits();
	printf("the sum of digits are : %d",i);
