#include<stdio.h>

int* fun1(int*);
int main(){
	int a,b;
	int* q,r;
	scanf("%d",&a);
	scanf("%d",&b);
	q=fun1(&a);
	r=fun1(&b);
	printf("%d %d\n",q,r);

}
int* fun1(int* a){
	*a=20;
	return a;
}