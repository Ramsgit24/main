//#include<stdio.h>
//int sum_digits();
//int main(){
//	int x;
//	x = sum_digits();
//	printf("sum of digits are :%d",x);
//	return 0;
//}
//int sum_digits(){
//	int i,n,sum=0;
//	printf("enter number ");
//	scanf("%d",&n);
//	for(i=n;n>0;n=n/10)
//	{
//		i = n %10;
//		sum = sum + i;
//	}
//	return sum;
//}

//normal method


//#include<stdio.h>
//int main(){
//	int i,n,sum=0;
//	printf("enter number :");
//	scanf("%d",&n);
//	for(i=n;n!=0;n/=10)
//	{
//		i = n %10;
//		sum += i;
//	}
//	printf("the sum is :%d\n",sum);
//}

//parameters passing
//#include<stdio.h>
//int sum(int);
//void main(){
//	int y,x;
//	printf("enter number :");
//	scanf("%d",&x);
//	y = sum(x);
//	printf("the sum of %d is :%d\n",x,y);
//}
//int sum(int n){
//	int count=0,i;
//	for(i=n;n!=0;n/=10){
//		i = n%10;
//		count += i;
//	}
//	return count;
//}