#include<stdio.h>
union A{
	int a;
	float b;
	char c;
	double d;
};
int main(){
	union A q;
	q.d=12364.634;
	q.a=20;
	q.c='a';
	q.b=12.453f;
}