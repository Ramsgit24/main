#include<stdio.h>
int rev_recursion(int,int);
int main(){
	int a,b;
	printf("enter a number:");
	scanf_s("%d",&a);
	b=rev_recursion(a,0);
	printf("%d",b);

}
int rev_recursion(int n,int d){
	if(n==0){
		return d;
	}
	d=d*10+n%10;
	return rev_recursion(n/10,d);
}
/*Initial Call: rev_recursion(1234, 0)
Last digit: 4, Reversed so far: 0 * 10 + 4 = 4
Next Call: rev_recursion(123, 4)
Last digit: 3, Reversed so far: 4 * 10 + 3 = 43
Next Call: rev_recursion(12, 43)
Last digit: 2, Reversed so far: 43 * 10 + 2 = 432
Next Call: rev_recursion(1, 432)
Last digit: 1, Reversed so far: 432 * 10 + 1 = 4321
Next Call: rev_recursion(0, 4321)
Base Case: Return 4321*/