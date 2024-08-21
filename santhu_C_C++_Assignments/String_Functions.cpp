#include<stdio.h>
int ur_strlen(char []);
void ur_strcpy(char [],char []);
void ur_strcat(char [],char []);
int ur_strcmp(char [],char []);
void ur_strrev(char []);
int main()
{
	char a[]="santhu";
	char b[20]="";
	char c[10]="santhu";
	char d[20]="santhu";
	char e[10]=" embedded";
	char f[10]="bharath";
	char g[10]="bharath";
	char h[7]="uhtnas";
	int length;
	int stringcmp;
	length = ur_strlen(a);
	printf("Length Of The String %d\n",length);
	ur_strcpy(c,b);
	printf("String Copy %s\n",b);
	ur_strcat(d,e);
	printf("String Copy %s\n",d);
	stringcmp = ur_strcmp(f,g);
	printf("String Comparision %d\n",stringcmp);
	ur_strrev(h);
	printf("String Reverse %s\n",h);
	return 0;
}
int ur_strlen(char a[])
{
	int i;
	i=0;
	while(a[i] != '\0'){
		i++;
	}
	return i;
}
void ur_strcpy(char d[],char s[])
{
	int len;
	int i;	
	i=0;
	while(d[i]!=0)
	{
		s[i] = d[i];
		i++;
		
	}
}
void ur_strcat(char d[],char s[])
{
	//d=santhu
	//s=embedded
	int len;
	int i;	
	i=0;
	len = ur_strlen(d);
	while(s[i] != '\0')
	{
		d[len] = s[i];
		len++;
		i++;
	}
}
int ur_strcmp(char s[],char d[])
{
	//santhu
	//santku
	int len;
	int i;
	int result;
	result = 0;
	i=0;
	
	while(s[i] != '\0' || d[i] != '\0')
	{
		if(s[i] != d[i])
		{
			result = 1;
			break;
		}
		else
		{
			i++;
		}
	}
	
	return result;
}
void ur_strrev(char s[])
{
	int len;
	int i;
	int j;
	char temp;
	len = ur_strlen(s);
	i=0;
	j=len - 1;
	while(s[i] != '\0' && i<j)
	{		
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}