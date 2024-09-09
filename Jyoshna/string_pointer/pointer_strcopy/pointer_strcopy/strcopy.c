#include<stdio.h>
void ur_strcpy(char*,char*);
void main()
{
	char a[]="hello";
	char b[6];
	ur_strcpy(b,a);
	printf("%s\n",b);
}
void ur_strcpy(char*B,char*A)
{
	//int i=0;
	while(*A!='\0')
	{
		*B=*A;
		A++;
		B++;
	}
	*B='\0';
}
	