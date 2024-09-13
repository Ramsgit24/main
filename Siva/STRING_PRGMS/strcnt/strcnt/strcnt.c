#include<stdio.h>

void ur_strcat(char [],char []);
void main()
{
	char d[15]="DHEERAJ";
	char s[]="DIVYA";

	ur_strcat(d,s);
 }
void ur_strcat(char d[],char s[])
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
	printf("%s\n",d);
}