/*#include <stdio.h>

int main() {
    int num, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num = num/10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}*/

#include<stdio.h>
int main()
{
	int n,reverse=0,reminder;
	printf("enter a number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		reminder=n%10;//1234
         reverse=reverse*10+reminder;//5*10+5
		 n=n/10;//55/10
	}
	printf("reverse number :%d \n",reverse);
}





















