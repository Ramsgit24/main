//#include<stdio.h>
//int prime();
//void main(){
//	int x;
//	x = prime();
//	if(x==1){
//		printf("number is prime \n");
//	}
//	else{
//		printf("number is not prime\n");
//	}
//
//}
//int prime()
//{
//	int i,n,count=0;
//	printf("Enter number :");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		if(n%i==0)
//		{
//			count+=1;
//		}
//	}
//	if(count <=2){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}

// normal method

//#include<stdio.h>
//int main(){
//	int i,n,count=0;
//	printf("Enter number :");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		if(n%i==0){
//			count += 1;
//		}
//	}
//	if(count <= 2){
//		printf("%d is prime\n",n);
//	}
//	else{
//		printf("%d is not prime\n",n);
//	}
//}

//parameters passing


//#include<stdio.h>
//int prime(int);
//void main(){
//	int x,y;
//	printf("Enter number :");
//	scanf("%d",&x);
//	y = prime(x);
//	if(prime(x)){
//		printf("%d is prime number\n",x);
//	}
//	else{
//		printf("%d is not a prime number\n",x);
//	}
//}
//int prime(int n){
//	int i,count=0;
//	for(i=1;i<=n;i++){
//		if(n%i==0){
//			count+=1;
//		}
//	}
//	return count<=2;
//}
