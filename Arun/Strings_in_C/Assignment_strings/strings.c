//String length
#include<stdio.h>
int str_len(char []);
void us_strcpy(char[],char[]);
void str_cat(char [],char []);
void main()
{
	int d;
	char a[]="hello";
	d=str_len(a);
	printf("%d ",d);
}
int str_len(char s[])
{
	int i,len;
	i=0;
	len=0;
	while(s[i]!='\0')
	{
       len++;
	   i++;
	}
	return len;

}

//String copy.
#include<stdio.h>
void us_strcpy(char[],char[]);
void main()
{
   char a[]="HELLO";
   char d[6];
   us_strcpy(d,a);
}
void us_strcpy(char d[],char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		d[i]=s[i];
		i++;
	}
	d[i]='\0';
	printf("%s ",d);
}

//String concatination.
#include<stdio.h>
void str_cat(char [],char []);
void main()
{
	char a[15]="world";
	char b[]="hello";
	str_cat(a,b);
}
void str_cat(char a[],char b[])
{
	int i,j;
	i=0;
	j=0;
	while(a[i]!='\0')
	{
       i++;
	}
	while(b[j]!='\0')
	{
		a[i]=b[j];
		i++;
		j++;
	}
	a[i]='\0';
	printf("%s ",a);
}

//string comparation
#include<stdio.h>
int str_cmp(char [],char []);
void main()
{
	int d;
	char a[]="hello";
	char b[]="hillo";
	d=str_cmp(a,b);
	printf("%d",d);
}
int str_cmp(char c[],char d[])
{
	int i,j;
	i=0;
	j=0;
	while((c[i]!='\0')||(d[i]!='\0'))
	{
        if(c[i]!=d[i])
		{
           j++;
		   break;
		}
		i++;
	}
	return j;
}
