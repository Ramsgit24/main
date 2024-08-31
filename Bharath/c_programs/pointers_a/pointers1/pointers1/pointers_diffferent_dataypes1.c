#include<stdio.h>
int main()
{
	int a=10;
	char b=20;
	float c=30;
	double d=40;
	int* a1;
	char* b1;
	float* c1;
	double* d1;
	a1=&a;
	b1=&b;
	c1=&c;
	d1=&d;
	

    printf("The integer value adress is %p\n",&a);
	printf("The integer pointer adress is %p\n",&a1);
    printf("The integer pointer value is %p\n",a1);
	printf("The integer value is %d\n",a);
	printf("===================\n");
	printf("The char value is %c\n",*b1);
    printf("The char value adress is %p\n",&b);
	printf("The char pointer adress is %p\n",&b1);
    printf("The char pointer value is %p\n",b1);
	printf("The char value is %c\n",b);
	printf("===================\n");
	printf("The float value is %f\n",*c1);
    printf("The float value adress is %p\n",&c);
	printf("The float pointer adress is %p\n",&c1);
    printf("The float pointer value is %p\n",c1);
	printf("The float value is %f\n",c);
	printf("===================\n");
	printf("The double value is %lf\n",*d1);
    printf("The double value adress is %p\n",&d);
	printf("The double pointer adress is %p\n",&d1);
    printf("The double pointer value is %p\n",d1);
	printf("The double value is %lf\n",d);
	*a1=11;
	*b1=22;
	*c1=33;
	*d1=44;
	printf("*****************\n");
	printf("The integer value is %d\n",a);
	printf("The char value is %c\n",b);
	printf("The float value is %f\n",c);
	printf("The double value is %lf\n",d);

}