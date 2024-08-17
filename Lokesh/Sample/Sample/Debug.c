#include<stdio.h>
 void main()
 {
	int a=11;
	int b=22;
	int c;
	c=a>=b;
	c=b>=a;
	c=(a>b)&&(a!=0);
	c=(a<b)||(b>a);
	a+=1;
	b-=1;
	a*=1;
	b/=1;
	a%=1;
}
