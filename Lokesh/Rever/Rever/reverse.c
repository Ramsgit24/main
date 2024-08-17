/*#include<stdio.h>
void main()
{
	int n,r,rem=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rem=rem*10+r;
		n=n/10;
	}
	printf("reverse of number %d",rem);
}*/
#include<stdio.h>
void rev();
void main()
{
	rev();
}
void rev()
{
	int n,r,rev=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse of number :%d",rev);
}
