#include<stdio.h>
int ur_strlen(const char[]);
void main()
{
	char a[]="hello";
	int x = ur_strlen(a);
	printf("string length is %d\n",x);
}
int ur_strlen(const char s[])
{
	int i=0;
	while(i!='/0')
	{
		i++;
	}
	return i;
}