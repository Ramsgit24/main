#include<stdio.h>
int ur_strcat(char d[], const char s[]);
void main()
{
	int x;
	char d[20]="raj";
	char s[]="kumar";
	x=ur_strcat(d,s);
	printf("string concatenation is %s\n",x);
}
int ur_strcat(char d[],const char s[])
{
	int i=0,j=0;
	while(d[i]!='\0')
	{
		i++;
	}
	while(s[j]!='\0')
	{
		d[i]=s[j];
		i++;
		j++;
	}
	d[i]='\0';
	return d;
}