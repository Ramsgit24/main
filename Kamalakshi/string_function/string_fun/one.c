#include<stdio.h>
int ur_strlen(const char[]);
void ur_strcpy(char[], char[]);
void str_cat(char [],char[]);
int ur_strcmp(char [],char []);
void ur_strrev(char[]);

void main()
{
	int x,z;
	char a[]="hello";
	char s[]="kamalakshi";
	char d[11];
	char p[10]="raj";
	char q[]="kumar";
	char s1[]="kammu";
	char s2[]="kam";
	char r[]="hello";
	x = ur_strlen(a);
	ur_strcpy(d,s);
	str_cat(p,q);
	z=ur_strcmp(s1,s2);
	ur_strrev(r);
	printf("String length is %d\n", x);
	printf("string concat %s\n",p);
	printf("string comp is %d\n",z);
}

int ur_strlen(const char s[])
{
	int i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}

void ur_strcpy(char d[], char s[])
{
	int i = 0;
	while(s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	printf("String copy %s\n", d);
}
void str_cat(char p[],char q[])
{
	int i=0,j=0;
	while(p[i]!='\0')
	{
		i++;
	}
	while(q[j]!='\0')
	{
		p[i]=q[j];
		i++;
		j++;
	}
	p[i]='\0';
}
int ur_strcmp(char a[],char b[])
{
	int i=0,j=0;
	while((a[i]!='\0')||(b[i]!='\0'))
	{
		if(a[i]!=b[i])
		{
			j=1;
			break;
		}
		i++;
	}
	return j;
}
void ur_strrev(char r[])
{
	int i=0,len=0,j,k;
	while(r[i]!='\0')
	{
		len++;
		i++;
	}
	i=0,j=len-1;
	while(i<j)
	{
		k=r[i];
		r[i]=r[j];
		r[j]=k;
		i++;
		j--;
	}
	printf("reverse string is %s\n",r);
}
