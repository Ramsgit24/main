#include<stdio.h>
int ur_strcmp(char*,char*);
int main()
{
	int x;
	char a[]="jyo";
	char b[]="jys";
	x=ur_strcmp(a,b);
	printf("%d\n",x);
}
int ur_strcmp(char*B,char*A)
{
	int i=0;
	while((*B!='\0')||(*A!='\0'))
	{
		if(*B!=*A)
		{
			i++;
			break;
		}
		A++;
		B++;
	}
	return i;
}
