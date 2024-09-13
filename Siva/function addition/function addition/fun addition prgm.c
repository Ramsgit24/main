#include<stdio.h>
int add()// function declaration
{
	int a,b,c;
	
	scanf("%d",&a);//function defination/body
	scanf("%d",&b);
	c=a+b;
	printf("the addition is%d\n",c);
	
}
int mul()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a*b;
	printf("the multiplication is%d\n",c);
}
int sub()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
c=a-b;
printf("the subraction is%d\n",c);

}

int main()
{

add();
mul();// function calling.
sub();
}


