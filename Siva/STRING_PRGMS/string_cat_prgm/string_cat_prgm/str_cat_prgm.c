#include<stdio.h>

int ur_strcat(char [],char []);
int main()
{
	int a;
	char d[15]="DHEERAJ";
	char s[]="DIVYA";
	a=ur_strcat(d,s);
	printf("%s\n",a);
}
int ur_strcat(char d[],char s[])
{
	
	int i,j;
	i=0;
	j=0;
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