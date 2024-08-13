#include<stdio.h>
#include<math.h>
int count_digits(int);
int arm_strong(int);
int fact(int);
int main(){
	int a,b;
	scanf("%d",&a);
	b=arm_strong(a);
	printf("%d",b);
}
int count_digits(int n){
	int count=0;
	while(n>0){
		n=n/10;
		count++;
	}
	return count;
}
int arm_strong(int n){
	int r,temp,sum=0,cunt;
	temp=n;
	cunt=count_digits(n);
	while(n>0){
		r=n%10;
		sum=sum+pow(r,cunt);
		n=n/10;
	}
	return temp==sum;
}


