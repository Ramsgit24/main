#include<stdio.h>
char* fun();
void main()
{
	char *str=fun();
	printf("%s\n",str);
}
char* fun()
{
	static char a[]="chandu";//if you dont use static it leads to dangling
	return a;
}