#include<stdio.h>
//#include<string.h>
int ur_strlen(char[]);
int main()
{
	char s[]="hello";
	int x=ur_strlen(s);
	printf("%d\n",x);
}
int ur_strlen(char a[])
{
	int i=0;
	int len=0;
	while(a[i]!='\0')
	{
		len++;
		i++;
	}
	return len;
}