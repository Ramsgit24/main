//#include<stdio.h>
//int* fun1(int*);
//char* fun2(char*);
//int main(){
//	int a,b;
//	char c,d;
//	int* q;
//	int* r;
//	char* s;
//	char* t;
//	scanf_s("%d",&a);
//	scanf_s("%d",&b);
//	scanf_s(" %c",&c);
//	scanf_s(" %c",&d);
//	q=fun1(&a);
//	r=fun1(&b);
//	printf("%d %d\n",*q,*r);
//	s=fun2(&c);
//	t=fun2(&d);
//	printf("%c %c\n",*s,*t);
//}
//int* fun1(int* a){
//	*a=*a+20;
//	return a;
//}
//char* fun2(char* b){
//	*b='a'+*b;
//	return b;
//}

//#include<stdio.h>
//int add(int,int);
//int sub(int,int);
//int mul(int,int);
//int main(){
//	int a,b,c,d,e,f;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	scanf("%d",&c);
//	scanf("%d",&d);
//	scanf("%d",&e);
//	scanf("%d",&f);
//	a=add(a,b);
//	printf("%d,%d\n",a,b);
//	c=sub(c,d);
//	printf("%d,%d\n",c,d);
//	e=mul(e,f);
//	printf("%d,%d\n",e,f);

//}
//int add(int a,int b){
//	return a+b;
//
//}
//int sub(int a,int b){
//	return a-b;
//
//}
//int mul(int a,int b){
//	return a*b;
//
//}

#include<stdio.h>
int add(int*,int*);
int sub(int*,int*);
int mul(int*,int*);
int main(){
	int a,b,c,d,e,f;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&f);
	a=add(&a,&b);
	printf("%d,%d\n",a,b);
	c=sub(&c,&d);
	printf("%d,%d\n",c,d);
	e=mul(&e,&f);
	printf("%d,%d\n",e,f);

}
int add(int* a,int* b){
	return *a+*b;
}
int sub(int* a,int* b){
	return *a-*b;
}
int mul(int* a,int* b){
	return ((*a)*(*b));

}