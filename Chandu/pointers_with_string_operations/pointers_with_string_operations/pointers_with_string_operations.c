#include<stdio.h>
int str_len(char*);
void str_cpy(char*,char*);
void str_cat(char*,char*);
int str_cmp(char*,char*);
void str_rev(char*,char*);
int main()
{
	int x,y;
	char a[]="chandu";
	char b[10];
	char e[15];
	char h[20]="chandupraksh";
	char c[20]="prakash";
	x=str_len(a);
	printf("%d\n",x);
	str_cpy(b,a);
	printf("%s\n",b);
	str_cat(c,a);
	printf("%s\n",c);
	y=str_cmp(h,a);
	printf("%d\n",y);
	str_rev(e,a);
	printf("%s\n",e);

}

void str_rev(char*d,char*s)
{
	
	int i=0,j=0;
	while(*(s+i)!='\0')
	{
		i++;
	}
	while(*(s+j)!='\0')
	{
	    i--;
		*(d+j)=*(s+i);
		j++;
	}
	*(d+j)='\0';
}
int str_cmp(char*d,char*s)
{
	int t=0;
	while(*d!='\0'||*s!='\0')
	{
		if(*d!=*s)
		{
			t=1;
			break;
		}
		d++;
		s++;
	}
	return t;
}
void str_cpy(char*d,char*s)
{
	while(*s!='\0')
	{
		*d=*s;
		s++;
		d++;
	}
	*d='\0';
}
void str_cat(char*d,char*s)
{
	while(*d!='\0')
	{
		d++;
	}
	while(*s!='\0')
	{
		*d=*s;
		d++;
		s++;
	}
	*d='\0';
}

int str_len(char*b)
{
	int i=0;
	while(*b!='\0')
	{
		i++;
		b++;
	}
	return i;
}