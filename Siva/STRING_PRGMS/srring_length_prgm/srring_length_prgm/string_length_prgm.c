#include<stdio.h>
//#include<string.h>
int main()
{/*
	char s[]="DHEERAJ";
	int len=strlen(s);
	printf("%d\n",len);*/

	int len;	
	char s[]="DHEERAJ";
	int i=0;
	 len=0;
	while(s[i]!='\0')
	{
		len++;
		i++;
	}
	printf("%d\n",len);
}
