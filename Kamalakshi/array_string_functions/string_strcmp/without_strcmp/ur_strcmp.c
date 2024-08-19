#include<stdio.h>
int ur_strcmp(char s1[],char s2[]);
void main()
{
	char s1[]="ran";
	char s2[]="ram";
	int x=ur_strcmp(s1,s2);
	printf("%d\n",x);
}
int ur_strcmp(char s1[], char s2[])
{
	int i=0,j=0;
	while(s1[i]!=0 && s2[j]!=0)
	{
		i++;
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
		while(s1[i]!=0)
		{
			if(s1[i]!=s2[i])
			{
				return 1;
			}
			i++;
			j++;
		}
	}
	return 0;

}