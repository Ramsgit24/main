#include<stdio.h>
int main(){
	int a[]={5,4,3,2,1,0};
	printf("%p ",a);
	printf("%p ",&a);
	printf("%p ",&a[0]);
}