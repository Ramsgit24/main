//#include<stdio.h>
//#include<math.h>
//int amstrong(int);
//int main(){
//	int x;
//	printf("enter number :");
//	scanf("%d",&x);
//	if(amstrong(x)){
//		printf("%d is amstrong number\n",x);
//	}
//	else{
//		printf("%d is not amstrong number\n",x);
//	}
//}
//int amstrong(int n){
//	int i,originalnumber,result =0,count=0,rem,temp;
//	temp = n;
//	originalnumber = n;
//	for(i=n;n!=0;n/=10){
//		count+=1;
//	}
//	
//	for(i=temp;i!=0;i/=10){
//		rem = i %10;
//		result += pow(rem,count);
//	}
//	return result == originalnumber;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i,n,rem,count=0,result=0,originalnumber,temp;
//	printf("Enter number :");
//	scanf("%d",&n);
//	originalnumber = n;
//	temp=n;
//	for(i=n;n!=0;n/=10){
//		count+=1;
//	}
//	for(i=temp;i!=0;i/=10){
//		rem = i%10;
//		result += pow(rem,count);
//	}
//	if(result == originalnumber){
//		printf("%d is amstrong number :\n",originalnumber);
//	}
//	else{
//		printf("%d is not amstrong number\n:",originalnumber);
//	}
//}
