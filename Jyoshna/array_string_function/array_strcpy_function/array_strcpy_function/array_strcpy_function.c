#include<stdio.h>
#include<string.h>
void ur_strcpy(char[],char[]);
void main()
{
	char s[]="hello";
	char d[5];
	ur_strcpy(d,s);
}
void ur_strcpy(char d[],char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		d[i]=s[i];
		i++;
	}
	d[i]='\0';
	printf("%s\n",d);
}