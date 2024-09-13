# include<stdio.h>
void add();
int main()
{
	add();
	add();
	add();
}
void add()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a+b;
	printf("the addition is %d\n",c);
}

