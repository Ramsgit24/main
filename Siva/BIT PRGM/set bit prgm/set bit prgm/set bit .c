#include<stdio.h>
int setbit(int ,int);//position
int main()
{
	int a,x,pos;
	printf("enter the value ");
	
	scanf("%d",&x);
	scanf("%d",&pos);
	a=setbit(x,pos);
	printf("%d\n",a);

}
int setbit(int x,int pos)
{
	x=x|(1<<pos);
	return x;
}

	

