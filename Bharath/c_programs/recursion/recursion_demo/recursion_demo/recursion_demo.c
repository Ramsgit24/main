/*
#include<stdio.h>
void rec();
int x=8;
int main(){
	rec();
}
void rec(){
	if(x==0){
		return;
	}
	x--;
	printf("hello world\n");
	rec();
}*/

//gcd using recursion
/*
#include<stdio.h>
int gcd(int, int);
int main(){
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter a:");
	scanf("%d",&b);
	if(a>b){
		c=gcd(a,b,a-1);
	}else{
		c=gcd(a,b,b-1);
	}
	printf("%d",c);
}
int gcd(int n1,int n2,int i){
	if(i==1){
		return n1*n2;
	}
	if(n1%i==0 && n2%i==0){
		return i;
	}
	else{
		return gcd(n1,n2,i-1);
	}
}*/


#include<stdio.h>
int gcd(int, int);
int main(){
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter a:");
	scanf("%d",&b);
	if(a==b){
		printf("%d\n",a);
	}else if(a>b){
		c=gcd(a,b,a-1);
		printf("%d",c);
	}else{
		c=gcd(a,b,b-1);
		printf("%d",c);
	}
}
int gcd(int n1,int n2,int i){
	if(n1==1 || n2==1){
		return 1;
	}
	if(n1%i==0 && n2%i==0){
		return i;
	}
	else{
		return gcd(n1,n2,i-1);
	}
}
/*
#include<stdio.h>
int gcd(int,int);
int main(){
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	if(b!=0){
		c=gcd(a,a/b);
	}
	printf("%d",c);

}
int gcd(int n1,int n2){
	if(n2==0){
		return 1;
	}
	else{
		return gcd(n1,n1/n2);
	}

}*/


