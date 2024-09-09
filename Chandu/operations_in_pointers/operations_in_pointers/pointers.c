#include<stdio.h>
int* add(int*,int*);
int* sub(int*,int*);
int* mul(int*,int*);

int main()
{
	int a,b;
	int *p;
	printf("enter a value :");
	scanf("%d",&a);
	printf("enter b value :");
	scanf("%d",&b);

	p=add(&a,&b);
	printf("A value after function %d-%d\n",a,*p);

}

int* add(int* x,int* y)
{
	*x=*x+*y;
	//return x;
}