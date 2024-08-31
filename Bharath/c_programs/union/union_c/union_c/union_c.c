#include<stdio.h>
union E{
	int a;
	char b;
	double c;
	float d;
};
int main(){
	union E v;
	v.a=1;
	v.b='u';
	v.c=323.64L;
	v.d=654.755f;
	printf("%f\n",v.d);
	printf("%lf\n",v.c);
	printf("%d\n",v.b);
	printf("%d\n",v.a);

	//printf("%d",sizeof(v));
}