#include<stdio.h>
int rev();
int main()
{
	int x;
	x=rev();
	printf("%d \n",x);
}
	
	
int rev()
{
	
	int n,r,rev=0,t;// r=remainder;t= temparary value
	printf("enter the numbers : ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	//printf("the reverse of %d is %d \n",t,rev);
	return rev;
}

