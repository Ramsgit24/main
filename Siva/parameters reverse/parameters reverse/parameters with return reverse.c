#include<stdio.h>
int reverse(int);
int main()
{	
	int a,b;
	//reverse();
	printf("enter a number\n");
	scanf("%d",&a);
	b=reverse(a);
	printf("the reverse number %d\n",b);
}

int reverse(int n)
{
	int r,rev=0;
	//printf("enter the number : ");
	//scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	//printf("the reverse number is %d\n",rev);
	return rev;
}
