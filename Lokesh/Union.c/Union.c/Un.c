#include<stdio.h>
union A
{
	int b;
	short int f;
	char c;
	//double d;
};
int main()
{
	union A v;
	v.f=24;
	v.b=12;
	v.c='c';
     printf("%d\n",v.b);
	 printf("%hi\n",v.f);
	 printf("%c",v.c);
	//v.d=1234545;
	//printf("%d",sizeof(v));
}