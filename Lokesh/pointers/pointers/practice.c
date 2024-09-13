#include<stdio.h>
struct emp{
	int id;
	float marks;
	char sec;
};
int main(){
	struct emp X;
	int a=44;
	int* b=&a;
	struct emp* Y;
	Y=&X;
	Y->id=200;
	a=X.id;

	printf("value of a is %d\n",a);
	printf("address of a is %p\n",&a);
	printf("the value of b is %p\n",b);
	printf("the deference of pointer b:%d\n",*b);
	a=33;
	*b=66;


}