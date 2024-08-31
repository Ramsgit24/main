//#include<stdio.h>
//struct e{
//	char i;
//	int b;
//	char g;
//	int f;
//	double w;
//};
//int main(){
//
//	int a;
//	struct e q; 
//	
//	a=sizeof(q);
//}
#include<stdio.h>
struct A{
	int a;
	float b;
	char c;
	double d;
};
struct B{
	struct A q;
	double e;
	double f;
	int c;
	struct A w;
};
int main(){
	struct B r;
	r.q.a=10;
	r.q.b=10.4;
	r.e=5.34;
	printf("%d %f %D\n",r.q.a,r.q.b,r.e);
}