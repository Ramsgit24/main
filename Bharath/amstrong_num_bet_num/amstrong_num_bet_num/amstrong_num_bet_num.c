#include<stdio.h>
#include<math.h>
int count_digits_number(int);
void armstrong_bet_two_numbers(int,int);
int main(){
	int  a,b,c;
	scanf("%d",&b);
	scanf("%d",&c);
	armstrong_bet_two_numbers(b,c);
}
int count_digits_number(int n){
	int count=0;
	while(n>0){
		n=n/10;
		count++;
	}
	return count;
}
void armstrong_bet_two_numbers(int x,int y){
	int i,cunt,temp,r,sum;
	for(i=x;i<=y;i++){
		temp=i;
		sum=0;
		cunt=count_digits_number(temp);
		for(temp;temp>0;temp=temp/10){
			r=temp%10;
			sum=sum+pow(r,cunt);
			
		}
		/*while(temp>0){
			r=temp%10;
			sum=sum+pow(r,cunt);
			temp=temp/10;
		}*/
		if(sum==i){
			printf("%d ",i);
		}
	}
}
/*
#include<stdio.h>
int main(){
	int num,i,count=0;
	printf("enter a number:");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i==0){
			count++;
			break;//it exit the for loop when the if block is true 
		}
	}
	if(count==0)
		printf("prime");
	else
		printf("not prime");
}
*/
