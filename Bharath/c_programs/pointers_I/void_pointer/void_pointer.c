#include<stdio.h>
int main(){
	int x=100;
	char y='c';
	float z=53.54f;
	double u=654.343;
	void *h=&x;
	//printf("%d ",*h);//illeagal indirection -- to avoid this we need to typecast explicitly
	*(int*)h=54;
	printf("%d ",*(int*)h);
	h=&y;
	*(char*)h='I';
	printf("%c ",*(char*)h);
	h=&z;
	*(float*)h=43.5f;
	printf("%f ",*(float*)h);
	h=&u;
	*(double*)h=123.435;
	printf("%f ",*(double*)h);

	
}