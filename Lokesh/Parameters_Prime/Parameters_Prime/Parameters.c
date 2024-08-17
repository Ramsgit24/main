#include<stdio.h>
int prime(int);
int main()
{
	int a,b;
	printf("enter a number :");
	scanf("%d",&a);
    b=prime(a);
	printf("%d",b);

}
int prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			count=count+1;
	}
    if(count==2)
	{
		printf("prime \n");
		return 1;
	}
	  
	else
	{
		printf("not prime \n ");
		return 0;
	}
}

