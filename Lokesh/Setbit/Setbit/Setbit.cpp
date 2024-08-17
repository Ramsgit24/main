
//#include "stdafx.h"
//
//int setbit(int,int);
//#include<stdio.h>
//
//
//int main()
//{
//	int a;
//	a=setbit(12,1);
//	printf("%d \n",a);
//    
//}
//int setbit(int x,int pos)
//{
//	x=x|(1<<pos);
//	return x;
//}
/*#include "stdafx.h"
#include<stdio.h>
int reset(int,int);
int main()
{
	int a;
	a=reset(12,3);
	printf("%d",a);
}
int reset(int x,int pos)
{
	x=x&(~(1<<pos));
	return x;
}*/
/*#include "stdafx.h"
#include<stdio.h>
int togle(int,int);
int main()
{
	int a;
	a=togle(12,3);
	printf("%d",a);
}
int togle(int x,int pos)
{
   x=x^(1<<pos);
   return x;
}*/
/*#include "stdafx.h"
#include<stdio.h>
int set(int,int);
int main()
{
   int a;
   a=set(13,1);
   printf("%d",a);
}
int set(int x,int pos)
{
	x=(x>>pos)&1;
	return x;
}*/
/*#include "stdafx.h"
#include<stdio.h>
int num(int);
int main()
{
	int a;
	a=num(32);
	printf("%d",a);
}
int num(int x)
{
	int count=0;
	for(;x;x&=(x-1))
	{
		count++;
	}
	return count;
}*/




