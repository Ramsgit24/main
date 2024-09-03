#include<stdio.h>
int ur_strlen(char* );
void ur_strcpy(char* ,char*);
void ur_strcat(char *,char*);
int ur_strcmp(char *,char *);
void ur_strrev(char* );
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
int ur_strlen(char* a)
{
	int i;
	i=0;
	while(*a != '\0'){
		i++;
		a++;
	}
	return i;
}
void ur_strcpy(char* d,char* s)
{

	int i;	
	i=0;
	while(*d != '\0')
	{
		*s = *d;
        d++;
        s++;
		
	}
}
void ur_strcat(char* d,char* s)
{
	//d=santhu
	//s=embedded
	int len;
	int i;	
	i=0;
	len = ur_strlen(d);
	d+=len;
	while(*s != '\0')
	{
		*d = *s;
		d++;
		s++;
	}
	*d='\0';
}
int ur_strcmp(char* s,char* d)
{
	//santhu
	//santku
	int i;
	int result;
	result = 0;
	i=0;
	
	while(*s != '\0' || *d != '\0')
	{
		if(*s != *d)
		{
			result = 1;
			break;
		}
		else
		{
		d++;
		s++;
		}
	}
	
	return result;
}
void ur_strrev(char* s)
{
	int len;
	char* i;
	char* j;
	char temp;
	len = ur_strlen(s);
	i=s;
	j=s + len - 1;
	while(i<j)
	{		
		temp = *i;
		*i = *j;
		*j = temp;
		i++;
		j--;
	}
}