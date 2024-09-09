#include<stdio.h>
void ur_strcan(char*,char*);
void main()
{
	char a[20]="yugesh";
	char b[]="kumar";
	ur_strcan(a,b);
	printf("%s\n",a);
}
void ur_strcan(char*A,char*B)
{
	while(*A!='\0')
	{
		A++;
	}
	while(*B!='\0')
	{
		*A=*B;
		A++;
		B++;
	}
	*A='\0';
}