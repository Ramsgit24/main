#include<stdio.h>

int main()
{
	//int* a,b,c;//a only is a pointer variable b,c are normal variables
	int a=10;
	char c='g';
	float f=55.5f;
	double d=576.07;
	int* b=&a;
	char* i=&c;
	float* j=&f;
	double* k=&d;
	printf("%d-%d-%d-%d\n",*b,&a,&b,b);
	*b=30;
	printf(" a modified value through b is :%d\n",a);

	printf("%c-%d-%d-%d\n",*i,&c,&i,i);
	*i='k';
	printf(" c modified value through i is :%c\n",c);

	printf("%f-%d-%d-%d\n",*j,&f,&j,j);
	*j=333.6f;
	printf(" f modified value through j is :%f\n",f);

	printf("%lf-%d-%d-%d\n",*k,&d,&k,k);
	*k=377.89;
	printf(" d modified value through k is :%lf\n",d);
	
}

