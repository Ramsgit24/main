#include<stdio.h>
int main()
{
	int a=10;
	int* b;
	char c=23;
	char*d;
	float e=34;
	float*f;
	double i=45;
	double*j;
	b=&a;
	d=&c;
	f=&e;
	j=&i;
	printf("the integer pointer is %d\n",*b);
	printf("the integer address %p\n",&a);
	printf("the integer address %p\n",&b);
	printf("the integer address value %p\n",b);

	printf("==========================\n");

	printf("the char pointer is %c\n",*d);
	printf("the char address %p\n",&c);
	printf("the char address %p\n",&d);
	printf("the char address value %p\n",d);

	printf("==========================\n");

	printf("the float pointer is %f\n",*f);
	printf("the float address %p\n",&e);
	printf("the float address %p\n",&f);
	printf("the float address value %p\n",f);

	printf("==========================\n");
	printf("the double pointer is %lf\n",*j);
	printf("the double address %p\n",&i);
	printf("the double address %p\n",&j);
	printf("the double address value %p\n",j);

	printf("==========================\n");
	*b=30;
	*d=300;
	*f=32;
	*j=3023;
	printf("the integer value is %d\n",a);
	printf("the char value is %c\n",c);
	printf("the float value is %f\n",d);
	printf("the double value is %lf\n",i);
}


