#include<stdio.h>
int main(){
	int num1,num2,i,count=0,j,no_of_prime=0;;
	printf("enter a number1:");
	scanf("%d",&num1);
	printf("enter a number1:");
	scanf("%d",&num2);
	for(i=num1;i<=num2;i++){
		count=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d ",i);
			no_of_prime++;
		}
	}
	/*if(count==1){
	printf("it is a prime");
	}else{
	printf("it is not a prime");
	}*/
	printf("number of prime numbers is %d\n",no_of_prime);
}