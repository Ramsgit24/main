#include<stdio.h>
int ur_strcmp(char[],char[]);
int main()
{
	char d[]="jyo";
	char s[]="jyo";
	int x=ur_strcmp(d,s);
	printf("%d\n",x);
}
int ur_strcmp(char d[],char s[])
{
	int i=0;
	int j=0;
	while(d[i]!='\0')
	{
		i++;
	}
	while(s[j]!='\0')
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
		while(d[i]!=0)
		{
			if(d[i]!=s[j])
			{
				return 1;
			}
			i++;
			j++;

		}
	}
	return 0;
}