#include<stdio.h>
int ur_strlen(char*);
int main()
{
	int x;
	char a[]="hello";
	x=ur_strlen(a);
	printf("%d\n",x);
}
int ur_strlen(char* A)
{
	int i=0;
	while(*A!='\0')
	{
		i++;
		A++;
	}
	return i;
}

