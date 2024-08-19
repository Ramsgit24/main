#include<stdio.h>

int ur_strlen(char[]);

void ur_strcpy(char[],char[]);

void ur_strcat(char[],char[]);

int ur_strcmp(char[],char []);

void ur_strrev(char[]);

int main()
{
	char a[30],b[30],g[30],d[30],k[30];
	int l;
	printf("Enter a string to find length of the string : ");
	scanf("%s",a);
	printf("%s length is : %d\n\n",a,ur_strlen(a));

	printf("Enter a string to copy to another string : ");
	scanf("%s",b);
	printf("before copying string is :%s\n",a);
	ur_strcpy(a,b);

	printf("\nEnter a two strings to concatenate  : \n");
	printf("Enter first string  : ");
	scanf("%s",g);
	printf("Enter second string  : ");
	scanf("%s",d);
	ur_strcat(g,d);

	printf("Enter two strings to compare :\n ");
	printf("Enter first string  : ");
	scanf("%s",d);
	printf("Enter second string  : ");
	scanf("%s",k);
	l=ur_strcmp(d,k);
	if(l==0)
	{
		printf("%s and %s both are same\n",d,k);
	}
	else
	{
		printf("%s and %s both are not same\n",d,k);
	}
	
	printf("Enter a string to reverse  : ");
	scanf("%s",b);
	ur_strrev(b);
	return 0;
}

int ur_strlen(char c[])
{
	int i=0;
	while(c[i]!='\0')
	{
		i++;
	}
	return i;
}

void ur_strcpy(char d[],char e[])
{
	int i=0;
	while(e[i]!='\0')
	{
		d[i]=e[i];
		i++;
	}
	d[i]='\0';
	printf("after copying string is : %s\n",d);
}

void ur_strcat(char f[],char h[])
{
	int i=0,j;
	j=ur_strlen(f);
	while(h[i]!='\0')
	{
		f[j]=h[i];
		i++;
		j++;
	}
	f[j]='\0';
	printf("after contacatinating the string is : %s\n",f);
}

int ur_strcmp(char m[],char n[])
{
	 int i=0,l1,l2;
	l1=ur_strlen(m);
	l2=ur_strlen(n);

	if(l1!=l2)
	{
		return 1;
	}
	else
	{
		while(i<l1)
		{
			if(m[i]!= n[i])
			{
				return 1;
			}
			i++;
		}
	}
	return 0;
}

void ur_strrev(char r[])
{
	int i,temp,j;
	for(i=0,j=ur_strlen(r)-1;i<j;i++,j--)
	{
		temp=r[i];
		r[i]=r[j];
		r[j]=temp;
	}
	printf("reverse of the string is  : %s\n",r);
}