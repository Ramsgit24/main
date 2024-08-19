#include<stdio.h>
int ur_strlen(const char []);
void ur_strcpy(char[],char[]);
void main()
{
	char s[]="ram";
	char d[]="hellosuji";
	int len =ur_strlen(s);
	printf("%d\n",len);
	ur_strcpy(d,s);
}
int ur_strlen(const char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	return i;
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