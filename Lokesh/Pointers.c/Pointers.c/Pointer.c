#include<stdio.h>
int main()
{
	int a=10;
	int* a1;
	float f=12.3f;
	float* f1;
	char c='A';
	char* c1;
	double d=444.5;
	double* d1;
	a1=&a;
    //f1=&f;
	printf("%d  \n",a);
	printf("%d integer value address \n",&a);
	printf("%d the integer value \n",&a1);
	printf("%d  \n",*a1);
}