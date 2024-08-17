#include<stdio.h>
void sub();
void mul();
void div();
int main()
{
	sub();
	mul();
	div();

}
void sub()
{
 int a,b,c;
 scanf("%d",&a);
 scanf("%d",&b);
 c=a-b;
 printf("Substraction:%d \n",c);
 }
void mul()
{

 int a,b,c;
 scanf("%d",&a);
 scanf("%d",&b);
 c=a*b;
 printf("multiplication:%d \n",c);
 }
void div()
{
 int a,b,c;
 scanf("%d",&a);
 scanf("%d",&b);
 c=a/b;
 printf("Division:%d \n",c);
}


