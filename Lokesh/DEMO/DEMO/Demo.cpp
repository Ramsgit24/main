#include<stdio.h>
#include<string.h>
int stlen(char);
int main()
{
	int y;
	char x[]="lokeswara";
	y=stlen(x);
	printf("%d",y);
}
int stlen(char a[])
{
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	return i;
}

