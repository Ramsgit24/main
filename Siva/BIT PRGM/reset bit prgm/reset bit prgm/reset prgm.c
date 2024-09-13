#include<stdio.h>
int reset(int,int);
int main()
{ int a;
a=reset(6,1);
printf("%d",a);
}
int reset(int x,int pos)
{
 return x=(x&(~(1<<pos)));
}

