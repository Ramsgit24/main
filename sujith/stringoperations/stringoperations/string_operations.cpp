#include<stdio.h>
int strlength(const char[]);
void strcopy(char[],char[]);
void strconcat(char[],char[]);
void strcompare(char[],char[]);
void strreverse(char[]);
void main()
{
	char a[]="sujith";
	char b[]="kumar";
	int l=strlength(a);
	printf("length of string is %d\n",l);
	strcopy(a,b);
	printf("%s\n",a);
	strconcat(a,b);
	printf("%s\n",a);
}
int strlength(const char a[])
{
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	return i;
}
void strcopy(char d[20],char s[])
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
void strconcat(char d[20],char s[])
{
	int i=0,j=0;
	while(d[i]!='\0')
	{
		i++;
	}
	while(s[j]!='\0')
	{
		d[i]=s[j];
		j++;
		i++;
	}
	d[i]='\0';	
}