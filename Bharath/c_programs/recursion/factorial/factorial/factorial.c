#include<stdio.h>
int factorial(int);
int main(){
	int a,b;
	scanf("%d",&a);
	b=factorial(a);
	printf("%d",b);
}
int factorial(int x){
	int fact,fact_N;
	if(x==0){
		return 1;
	}
	fact_N =factorial(x-1);
	fact=fact_N *x;
	return fact;
}