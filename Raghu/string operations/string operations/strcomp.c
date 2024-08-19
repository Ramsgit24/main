//#include<stdio.h>
//int ur_strcomp(char a[],char b[]);
//int main()
//{
//	char a[6]="raghu";
//	char b[6]="raghU";
//	int x=ur_strcomp(a,b);
//	if(x==0)
//	{
//		printf("is same\n");
//	}
//	else
//	{
//		printf("is not same\n");
//	}
//}
//int ur_strcomp(char a[],char b[])
//{
//	int i=0;
//	int j=0;
//
//	while(a[i]!='\0')
//	{
//		i++;
//	}
//	while(b[j]!='\0')
//	{
//		j++;
//	}
//	if(i!=j)
//	{
//		return 1;
//	}
//	else
//	{	i=0;
//		j=0;
//		while(a[i]!='\0')
//		{
//			if(a[i]!=b[j])
//			{
//				return 1;
//			}
//			i++;
//			j++;
//		}
//	}
//	return 0;	
//
//}

/*#include<stdio.h>
int ur_strcomp(char a[],char b[]);
int main()
{
	char a[9]="sripathi";
	char b[]="sripaThi";
	int x=ur_strcomp(a,b);
	if(x==0)
	{
		printf("this is same\n");
	}
	else
	{
		printf("this is not same\n");	
	}
}
int ur_strcomp(char a[],char b[])
{
	int i=0;
	int j=0;
	while(a[i]!='\0')
	{
		i++;
	}
	while(b[j]!='\0')
	{
		j++;
	}
	if(i!=j)
	{
		return 1;
	}
	else
	{
		i=0;
		j=0;
		while(a[i]!='\0')
		{
			while(a[i]!=b[j])
			{
				j++;
				return 1;
			}
			i++;
		}
	}
	return 0;

}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
	char a[6]="raghu";
	char b[]="raghu";
	int x=strcmp(a,b);
	if(x==0)
	{
		printf("this is same\n");
	}
	else
	{
		printf("this is not same\n");
	}
	
}*/

/*#include<stdio.h>
int sr_strcmp(char [],char []);
int main()
{
	char a[6]="raghu";
	char b[]="ragHu";
	int x=sr_strcmp(a,b);
	if(x==0)
	{
		printf("0\n");
	}
	else
	{
		printf("1\n");
	}
}
int sr_strcmp(char a[],char b[])
{
	int i=0,l1,l2;
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
	{
	return 1;
	}
	else
	{
		while(i<l2)
		{
			if(a[i]!=b[i])
			{
				return 1;
				
			}
			i++;
		}
	}
	return 0;
}*/
