#include<stdio.h>
void ur_strcat(char[],char[]);
void main()
{
	char d[9]="ram";
	char s[]="kumar";
	ur_strcat(d,s);
}
void ur_strcat(char b[],char a[])
{
	int i=0;
	int j=0;
	while(b[i]!='\0')
	{
		i++;
	}
	while(a[j]!='\0')
	{
		b[i]=a[j];
		i++;
		j++;
	}
	b[i]='\0';
	printf("%s\n",b);
}
