#include<stdio.h>
void callbyvalue(int,int);
int* callbyref(int*,int*);
int main()
{
	int a,b;
	int *p;
	printf("Enter a value :");
	scanf("%d",&a);
	printf("Enter b value :");
	scanf("%d",&b);
	
	callbyvalue(a,b);
	printf("call by value output %d-%d\n",a,b);
	
	p=callbyref(&a,&b);
	//printf("call by reference output %d-%d\n",a,b);
	printf("%d\n",*p);
}
void callbyvalue(int x,int y)
{
	x=x+10;
	y=y+20;
}
int* callbyref(int* x,int* y)
{
	//*x=*x+10;
	*y=*y+20;
	return y;
}