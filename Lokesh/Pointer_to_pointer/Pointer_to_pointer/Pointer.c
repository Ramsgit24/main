#include<stdio.h>
int main()
{
	int x=11;
	int* a=&x;
	int** b=&a;
	int*** c=&b;
	int**** d=&c;
	int***** e=&d;
	int****** f=&e;
	printf("Single pointer\n");
	printf("%p\n",a);
    printf("%p\n",&a);
	printf("%d\n",*a);
	printf("Double pointer\n");
	printf("%p\n",b);
	printf("%p\n",&b);
	printf("%p\n",*b);
	printf("%d\n",**b);
    printf("Triple pointer\n");
	printf("%p\n",c);
	printf("%p\n",&c);
	printf("%p\n",*c);
	printf("%p\n",**c);
	printf("%d\n",***c);
	/*printf("%p\n",d);
	printf("%p\n",e);
	printf("%p\n",f);*/
}