#include<stdio.h>
#include<math.h>
int main(){
	int num1,num2,count,i,sum=0,r,flag,temp;
	scanf("%d",&num1);
	scanf("%d",&num2);
	for(i=num1;i<=num2;i++){
		count=0;
		sum=0;
		temp=i;
		flag=i;
		while(temp>0){
			temp=temp/10;
			count++

		}
		while(flag>0){
			r=flag%10;
			sum=sum+pow(r,count);//imp condition
			flag=flag/10;
		}
		if(sum==i){
			printf("%d ",i);
		}
	}
}