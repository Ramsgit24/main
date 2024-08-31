
//sum of natural numbers using recursion

//#include<stdio.h>
//int sum(int);
//int main(){
//	int a,b;
//	scanf("%d",&a);
//	b=sum(a);
//	printf("%d",b);
//}
//int sum(int n){
//	if(n!=0){
//		return (n+sum(n-1));
//	}else{
//		return 0;
//	}
//}

//fact

//#include<stdio.h>
//int fact(int);
//int main(){
//	int a,b;
//	scanf("%d",&a);
//	b=fact(a);
//	printf("%d",b);
//}
//int fact(int n){
//	if(n!=0){
//		return (n*fact(n-1));
//	}else{
//		return 1;
//	}
//}

//power of number 2 power 5 =32
/*
#include<stdio.h>
int power(int,int);
int main(){
	int a,b,c;
	printf("enter the base:");
	scanf("%d",&a);
	printf("enter the power:");
	scanf("%d",&b);
	c=power(a,b);
	printf("%d ",c);
}
int power(int x,int y){
	if(y!=0){
		return (x)*power(x,y-1);
	}else{
		return 1;
	}
}*/

//check given number is prime or not
/*
#include<stdio.h>
int prime_r_not(int,int);
int main(){
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	if(a<2){//less than 2 or negative numbers are not negative
		printf("it is not prime");
	}else if(prime_r_not(a,a-1)){
		printf("it is a prime number");
	}else{
		printf("it is not prime");
	}
}
int prime_r_not(int n,int d){
	if(d==1){//if d is reaches 1 then it is a prime number
		return 1;//we did not shift the if conditions or interchange;
	}
	if(n%d==0){//if any value of d is divided by d it is not a prime (other than 1
		return 0;
	}
	return prime_r_not(n,d-1);//recursive function
}
*/

//prime numbers between two numbers
#include<stdio.h>
int prime_r_not(int,int);
void prime_bew_num(int, int);
int main(){
	int num1,num2;
	printf("enter a number:");
	scanf("%d",&num1);
	printf("enter a number 2:");
	scanf("%d",&num2);
	prime_bew_num(num1,num2);
}
int prime_r_not(int n,int d){
	if(n<2){
		return 0;
	}
	if(d==1){//if d is reaches 1 then it is a prime number
		return 1;//we did not shift the if conditions or interchange;
	}
	if(n%d==0){//if any value of d is divided by d it is not a prime (other than 1
		return 0;
	}
	return prime_r_not(n,d-1);//recursive function
}
void prime_bew_num(int a, int b){
	if(a>b){
		return;
	}
	if(prime_r_not(a,a-1)){
		printf("%d ",a);
	}
	prime_bew_num(a+1, b);
}