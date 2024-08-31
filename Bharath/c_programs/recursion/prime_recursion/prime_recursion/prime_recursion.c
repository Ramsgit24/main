//#include<stdio.h>
//int isprime(int ,int);
//int main(){
//	int a;
//	scanf("%d",&a);
//	if(a<=1){
//		printf("it is not prime number %d",a);
//	}else if(isprime(a,a)){
//		printf("it is a prime number %d",a);
//	}else{
//		printf("%d is not a prime number\n", a);
//	}
//}
//int isprime(int n,int i){
//	if(i==1){
//		return 1;
//
//	}else if(n%i==0){
//		return 0;
//	}else {
//		return isprime(n,i-1);
//	}
//}

#include <stdio.h>
int power(int n1, int n2);
int main() {
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
