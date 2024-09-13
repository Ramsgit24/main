//#include<stdio.h>
//int ur_strlen(char []);
//void ur_strcpy(char[],char[]);
//void ur_strcat(char[],char[]);
//int ur_strcmp(char [],char[]);
//void ur_strrev(char []);
//int main()
//{
//	int a;
//	int h;
//	char b[]="siva";
//
//	char d[10];
//	char s[]="pandu";
//
//	char q[20]="dheeraj";
//	char w[]="divyanka";
//
//	char o[]="bittu";
//	char p[]="bittu";
//
//	char n[]="siva";
//
//	a=ur_strlen(b);
//	ur_strcpy(d,s);
//	ur_strcat(q,w);
//	 h=ur_strcmp(o,p);
//	 ur_strrev(n);
//
//
//	printf(" the string length is=%d\n",a);
//	printf("the string copy is %s\n",d);
//	printf("the concatination is %s\n",q);
//	printf("the string comparison value is=%d\n",h);
//	printf("the string reverse is %s \n",n);
//}
//
//int ur_strlen(char d[])
//{
//	int i=0;
//	int len=0;
//	while(d[i]!='\0')
//	{
//		i++;
//		len++;
//	}
//	return len;
//}
//
//void ur_strcpy(char d[],char s[])
//{
//	int i=0;
//	while(s[i]!='\0')
//	{
//		d[i]=s[i];
//		i++;
//	
//	}
//	d[i]='\0';
//}
//
//void ur_strcat(char a[],char b[])
//{
//	int i=0;
//	int j=0;
//	while(a[i]!='\0')
//	{
//		i++;
//	}
//	while(b[j]!='\0')
//	{
//		a[i]=b[j];
//		i++;
//		j++;
//	}
//	a[i]='\0';
//}
//
//int ur_strcmp(char j[],char k[])
//{
//	int i=0;int s=0;
//	while(j[i]!='\0'||k[i]!='\0')
//	{
//		if(j[i]!=k[i])
//		{
//			s=1;
//			break;
//		}
//		i++;
//		
//	}
//	return s;
//}
//
//void ur_strrev(char m[])
//{
//	int i,j,temp,l=0;
//	while(m[l]!='\0')
//	{
//		l++;
//	}
//	for(i=0,j=l-1;i<j;i++,j--)
//	{
//		temp=m[i];
//		m[i]=m[j];
//		m[j]=temp;
//	}
//}


#include<stdio.h>
int ur_strlen(char[]);
void ur_strcpy(char[],char[]);
void ur_strcat(char[],char[]);
int ur_strcmp(char[],char[]);
void ur_strrev(char[]);
int main()
{
	int a;
	int m;
	char x[]="siva";
	char d[10];
	char g[]="siva";
	char w[15]="vadde";
	char e[]="siva";
	char h[]="divya";
	char z[]="divya";
	char c[]="anitha";

	a=ur_strlen(x);
	ur_strcpy(d,g);
	ur_strcat(w,e);
	m=ur_strcmp(h,z);
	ur_strrev(c);

	printf("the string length is %d\n",a);
	printf("the string copying is %s\n",d);
	printf("the string concatination is %s\n",w);
	printf("the string comparision is %d\n",m);
	printf("the string reverse is %s\n",c);
}
int ur_strlen(char a[])
{
	int i=0;
	int len=0;
	while(a[i]!='\0')
	{
		i++;
		len++;
	}
	return len;
}
void ur_strcpy(char j[],char k[])
{
	int i=0;
	while(k[i]!='\0')
	{
		j[i]=k[i];
		i++;
	}
	j[i]='\0';
}
void ur_strcat(char p[],char q[])
{
	int i=0;
	int j=0;
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
int ur_strcmp(char r[],char s[])
{
	int i=0,j=0;
while(r[i]!='\0'||s[i]!='\0')
{
	if(r[i]!=s[i])
	{
	  j=1;
	  break;
	}
	i++;
}
return j;
}
void ur_strrev(char f[])
{
	int i,j,len=0,temp;
	while(f[len]!='\0')
	{
		len++;
	}
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp=f[i];
		f[i]=f[j];
		f[j]=temp;
	}
}

	





