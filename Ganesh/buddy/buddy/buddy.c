#include<stdio.h>
int add()
{
	int a,b,c;
	printf("enter the values to add \n");
	scanf("%d",&a);
	scanf("%d",&b);
	c=a+b;
	printf("adding both is %d\n",c);
}
int sub()
{
	int f,u,k;
	printf("enter the values to subs\n");
	scanf("%d",&f);
	scanf("%d",&u);
	k=f-u;
	printf("substracting after %d\n",k);
}
int mult()
{
	int z,y,x;
	printf("enter the values to mult\n");
	scanf("%d",&z);
	scanf("%d",&y);
	x=y*z;
	printf("multiople of both %d\n",x);
}

int main()
{
add();
sub();
mult();
}