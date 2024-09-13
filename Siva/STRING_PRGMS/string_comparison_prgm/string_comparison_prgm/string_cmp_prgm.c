#include<stdio.h>
int ur_strcmp(char [],char[]);
int main()
{
	int a;
	char d[]="bittu";
	char s[]="divya";
	a=ur_strcmp(d,s);
	printf("%d\n",a);
}
int ur_strcmp(char d[],char s[])
{
	int i=0;
	int l1=0;
	int l2=0;


	while(s[l1]!='\0')
	{
		l1++;
	}
	while(d[l2]!='\0')
	{
		l2++;
	}
	if(l1!=l2)
	{
		return 1;     
	}
	else
	{
		while(i<l1)
		{
			if(d[i]!=s[i])
			{
				return 1;
			}
			i++;
		}

		return 0;
	}

}