//#include<stdio.h>
//int main(){
//	int i,n,sum=1;
//	printf("Enter number :");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		sum *= i;
//	}
//	printf("factorial of %d is %d\n",n,sum);
//}


// functions method

//#include<stdio.h>
//int factorial();
//void main(){
//	int x;
//	x=factorial();
//	printf("the factorial is %d\n",x);
//}
//int factorial()
//{
//	int n,i,sum=1;
//	printf("Enter number :");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		sum *= i;
//	}
//	return sum;
//}


//parameters passing (or)arguments passing

//#include<stdio.h>
//int factorial(int);
//void main(){
//	int x,y;
//	printf("Enter number :");
//	scanf("%d",&x);
//	y = factorial(x);
//	printf("the factorial of %d is %d\n",x,y);
//}
//int factorial(int n){
//	int i,sum=1;
//	for(i=1;i<=n;i++){
//		sum *= i;
//	}
//	return sum;
//}

//recursive method

//#include<stdio.h>
//int factorial(int);
//int main(){
//	int x,y;
//	printf("enter number :");
//	scanf("%d",&x);
//	y = factorial(x);
//	printf("the factorial of %d is %d\n",x,y);
//	return 0;
//}
//int factorial(int n){
//	if(n==0 || n==1){
//		return 1;
//	}
//	else{
//		return n * factorial(n - 1);
//	}
//}
	
