/*#include<stdio.h>
void main()
{
	int x,y,z;
	x=10;
	y=90;
	z=add(x,y);
	printf("enter a number:%d",z);
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}*/
#include<stdio.h>
int rev(int);
int main()
{
	int x,y;
	scanf("%d",&x);
    y=rev(x);
	printf("%d",y);
	
}
int rev(int n)
{
	int r,rev=0;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}
