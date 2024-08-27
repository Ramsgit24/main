#include<stdio.h>
void ur_strlen(const char x[]);
void ur_strcpy( char a[],char b[]); 
int ur_strcmp(char c[],char d[]);
int main()
{
	int z;
	char x[]="raghu";
	char a[]="RAGHU";
	char b[6];
	char c[]="raghu";
	char d[]="ragHu";
	ur_strlen(x);
	ur_strcpy(b,a);
	z=ur_strcmp(c,d);
	
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
void ur_strcpy( char b[],char a[])
{
	int i=0;
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
	b[i]='\0';
	printf("%s\n",b);
}
int ur_strcmp(char c[],char d[])
{
	int i=0,s=0;
	while((c[i]!='\0') || (d[i]!='\0'))
	{
		if(c[i]!=d[i])
		{
		s=1;
		break;
		}
		i++;
	}
	
	return s;

}