//#include<stdio.h>
//int bitpos(int,int);
//int main()
//{
//	int a,z,pos;
//	printf("enter the value");
//	scanf("%d",&z);
//	scanf("%d",&pos);
//	a=bitpos(z,pos);
//	printf("%d",a);
//}
//	int bitpos(int z,int pos)
//	{
//		z=z|(1<<pos);
//		return z;
//	}
//	

#include<stdio.h>
int setbit(int);
int main()
{
	int a,b,c;
	printf("enter the values\n");
	scanf("%d",&b);
	//scanf("%d",&c);
	a=setbit(b);
	printf("%d\n",a);
}
int setbit(int num)
{

int count=0;
for(;num;num&=(num-1))
{
	count++;
}
return count;
}
