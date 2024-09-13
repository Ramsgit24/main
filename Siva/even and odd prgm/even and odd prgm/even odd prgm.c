//#include<stdio.h>
//int main()
//{
//	int number;
//	printf("Enter the number: \n");
//	scanf("%d",&number);
//	if(number%2== 0)
//	{
//		printf("%d the number is even\n",number);
//	}
//	else
//	{
//		printf("%d the number is odd\n",number);
//	}
//}

//THE SUM OF DIGITS NUMBER//
#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("THE SUM OF DIGITS IS %d \n",sum);
}