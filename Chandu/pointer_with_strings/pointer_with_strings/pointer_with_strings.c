#include<stdio.h>

int main()
{
	char a[10]="chandu";
	char *ptr="prakash";
	char *str=a;
	printf("%s-%s\n",str,a);
	printf("%p-%p\n",str,a);
	printf("%s\n",str+1);
	*str='H';// we can modify
	printf("%s-%s\n",str,a);
	printf("%s\n",ptr);
	printf("%s\n",ptr+1);
	printf("%s\n",**(str+1));
	//*ptr='S';// we cant modify r-data and leads to run time error
	
}