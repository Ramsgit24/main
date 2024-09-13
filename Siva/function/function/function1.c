# include<stdio.h>
void add();//function intialisation/ prototype
void sub();
void mul();

int main()
{
	add();//function calling
    sub();
	mul();
}

void add()//function definition
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a+b;
	printf("the addition is%d\n",c);
}
void sub()
{
	int a,b,c;

	scanf("%d",&a);
	scanf("%d",&b);
	c=a-b;
	printf("the subtraction is%d\n",c);
}
void mul()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a*b;
	printf("the multiplication is%d\n",c);
}


	