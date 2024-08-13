#include<stdio.h>
int binary(int);
int main(){
	int a;
	a=binary(123);
	printf("%d",a);
}
int binary(int n){
	int b=0,t=1,r;
	while(n>0){
		r=n%2;
		b=b+t*r;
		t=t*10;
		n=n/2;
	}
	return b;
}