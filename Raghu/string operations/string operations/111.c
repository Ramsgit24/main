#include<stdio.h>
void ur_strlen(const char x[]);
void ur_strcpy( char [],char []); 
int ur_strcmp(char a[],char b[]);
void ur_strcat(char [],char []);
void ur_strrev(char[]);
int main()
{
	int z;
	
	char x[]="raghu";
	char s[]="RAGHU";
	char d[6];
	char a[]="raghu";
	char b[]="raghu";
	char p[15]="raghu";3
	char q[9]="sripathi";
	char r[6]="RAGHU";
	ur_strlen(x);
	ur_strcpy(d,s);
	z=ur_strcmp(a,b);
	ur_strcat(p,q);
	printf("%s\n",p);
	ur_strrev(r);
	printf("%s\n",r);
	if(z==0)
	{
		printf("is same\n");
	}
	else
	{
		printf("is not same\n");
	}
}
void ur_strlen(const char a[])
{
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	printf("%d\n",i);
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
int ur_strcmp(char a[],char b[])
{
	int i=0,s=0;
	while((a[i]!='\0') || (b[i]!='\0'))
	{
		if(a[i]!=b[i])
		{
		s=1;
		break;
		}
		i++;
	}
	
	return s;

}
void ur_strcat(char p[],char q[])
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
void ur_strrev(char r[])
{
	int i,j,temp;
	for(i=0,j=strlen(r)-1;i<j;i++,j--)
	{
		temp=r[i];
		r[i]=r[j];
		r[j]=temp;
	}

}