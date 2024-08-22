//#include<stdio.h>
//int palindrome();
//void main()
//{
//	int x;
//	x = palindrome();
//	if(x==1){
//		printf("number is palindrome\n");
//	}
//	else{
//		printf("number is not a palindrome\n");
//	}
//}
//int palindrome()
//{
//	int n,i,sum=0,rem;
//	printf("Enter number ");
//	scanf("%d",&n);
//	for(i=n;n!=0;n/=10){
//		rem = i %10;
//		sum *= 10 + rem;
//	}
//	return 1;
//}

//#include<stdio.h>
//int main(){
//	int i,n,rem,sum =0,x;
//	printf("enter number :");
//	scanf("%d",&n);
//	x = n;
//	/*for(i=n;i!=0;i/=10){
//		rem = i % 10;
//		sum = sum * 10 +rem;
//	}*/
//			//or
//
//	for(i=n;n!=0;n/=10){ 
//		rem = n%10;
//		sum = sum*10+rem;
//	}
//	if(x == sum){
//		printf("%d is palindrome\n",x);
//	}
//	else {
//		printf("%d is not palindrome\n",x);
//	}
//}

// parameters passing

//#include<stdio.h>
//int palindrome(int);
//void main(){
//	int x,y;
//	printf("Enter number :");
//	scanf("%d",&x);
//	y = palindrome(x);
//	if(y==1){
//		printf("the number %d is palindrome",x);
//	}
//	else{
//		printf("the number %d is not palindrome ",x);
//	}
//}
//int palindrome(int n){
//	int i,result=0,temp,rem;
//	temp = n;
//	for(i=n;n!=0;n/=10){
//		rem = n % 10;
//		result = result *10 + rem;
//	}
//	if(result == temp){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}




	