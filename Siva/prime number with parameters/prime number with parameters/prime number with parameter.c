#include<stdio.h>
int prime(int);
int main()
{
	
	int z,y;
	
	printf("enter the number");
		scanf("%d",&z);
		y=prime(z);
		printf("the number is prime %d \n",y);
}
int prime(int i)
{
	int x,count;
	x=1;
	count=0;
	while(x<=i)
	{
		if(i%x==0)
		{
			count++;
		}
		x++;
	}
	if(count==2)
	{
		return 1;

	}
	else
	{
		return 0;
	}
	

}




