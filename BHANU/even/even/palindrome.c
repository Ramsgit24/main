#include<stdio.h>
int main()
{
	int i,n,r,rn=0,n1;
	printf("enter number :");
	scanf("%d",&n);
	n1 = n;
	for(i=n;i!=0;i=i/10)
	{
		r = i%10;
		rn = rn *10 +r;
	}
	if(n1==rn)
	{
		printf("%d is palindrome\n",n1);
	}
	else
	{
		printf("%d is not a palindrome\n",n1);
	}

}
//
//#include<stdio.h>
//int main()
//{
//	int i,n,on,r,rn=0;
//	printf("enter number :");
//	scanf("%d",&n);
//	on = n;
//	while (n != 0) {
//        r = n % 10;
//        rn = rn * 10 + r;
//        n /= 10;
//    }
//	if(on == rn)
//	{
//		printf("%d is palindrome\n",on);
//	}
//	else
//	{
//		printf("%d is not a palindrome\n",on);
//	}
//
//}
