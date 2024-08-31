#include<stdio.h>
int main(){
	int num,temp,rem,rev=0;
	printf("enter a number:");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	//printf("rev is %d\n",rev);
	if(rev==temp){
		printf("it is a palindrome");
	}else{
		printf("it is not palindrome");
	}
}