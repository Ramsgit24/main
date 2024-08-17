/*#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("even");
	}
	else
		printf("odd");
}*/


/*#include<stdio.h>
int main()
{
	int i,num,count;
	printf("enter a number:");
	scanf("%d",&num);
    i=1;
	while(i<=num)
	{
		if(num%i==0)
		count++;
		i++;
	}
	if(count==2)
		printf("not prime");
	else
		printf("prime");
}*/
/*#include<stdio.h>
int main()
{
	int a,b,c=1;
	printf("enter a number");
	scanf("%d",&a);
	for(b=a;b>0;b--)
	{
        
		c*=a;

	}
	printf("output %d",c);
}*/
#include<stdio.h>
void main()
{
	int a,i,count=0;
	printf("enter a values");
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}


