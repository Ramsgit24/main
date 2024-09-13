#include<stdio.h.>
int binary();
int main()
{
	int x;
	x=binary();
	printf("%d",x);

}
int binary()
{
	int a,binary,r,t;
	printf("enter the number ");
	scanf("%d",&a);
	binary=0;
	t=1;
	while(a!=0)
	{
		r=a%2;
		binary=binary+r*t;
		t=t*10;
		a=a/2;
	}
	//printf("%d the binary number is \n",a);
	return binary;
}