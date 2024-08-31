//printing of natural numbers from 1 to n
/*#include<stdio.h>
void natural_numbers(int);
int main(){
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	natural_numbers(a);
}
void natural_numbers(int n){
	if(n==0){ //base case it stops the recursion when n=0;
		return 0;
	}
	printf("%d ",n);//before reccursive 50 to 1
	natural_numbers(n-1);//recursive
	printf("%d ",n);//after recursive 1 to 50 
}*/

//printing of even numbers from 1 to n
/*
#include<stdio.h>
void even_numbers(int);
int main(){
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	even_numbers(a);
}
void even_numbers(int n){
	if(n==0){
		return 1;
	}
	even_numbers(n-1);
	if(n%2==0){
		printf("%d ",n);
	}
}
*/

//printing of odd nnumbers between 1 to n
/*
#include<stdio.h>
void odd_numbers(int);
int main(){
	int a;
	scanf("%d",&a);
	odd_numbers(a);
}
void odd_numbers(int n){
	if(n==0){
		return 1;
	}
	odd_numbers(n-1);
	if(n%2==1){
		printf("%d ",n);
	}
}
*/


//sum of natural numbers 1 to n
/*
#include<stdio.h>
int sum_of_natural_numbers(int);
int main(){
	int a,b;
	printf("enter a number:");
	scanf("%d",&b);
	a=sum_of_natural_numbers(b);
	printf("%d",a);

}
int sum_of_natural_numbers(int n){
	int sum,N;
	if(n==0){
		return 0;
	}
	N=sum_of_natural_numbers(n-1);
	sum=N+n;
	return sum;
}
*/

//factorial of a number   it gives for liminted values 32 bit range only
/*
#include<stdio.h>
int factorial(int);
int main(){
	int a,b;
	printf("enter a number:");
	scanf("%d",&b);
	a=factorial(b);
	printf("%d",a);
}
int factorial(int n){
	int factN,fact;
	if(n==0){
		return 1;
	}
	factN=factorial(n-1);
	fact=factN*n;
	return fact;
}
*/

//no of set bits
/*
#include<stdio.h>
int num_of_set_bits(int);
int main(){
	int a;
	a=num_of_set_bits(29);
	printf("%d",a);

}
int num_of_set_bits(int n){
	int count=0;
	for(;n;n&=(n-1)){
		count++;
	}
	return count;
}
*/

//sum of natural number using non return with parameters using recursion
#include<stdio.h>
void sum_natural_numbers(int);
int sum=0;
int main(){
	int a;
	sum_natural_numbers(10);
	printf("%d",sum);
}
void sum_natural_numbers(int n){
	if(n==0){
		return;
	}
	sum_natural_numbers(n-1);
	sum=n+sum;
	//printf("%d",sum);
}
