#include<stdio.h>
int ur_strlen(char*);
void ur_strcpy(char*,char*);
void ur_strcon(char*,char*);
int ur_strcpm(char*,char*);
void ur_strrev(char*);

void main()
{
	int x,z;
	char a[20]="hello raj";
	char d[20];
	char h[20];
	char b[]="kumar";
	char s1[]="raj";
	char s2[]="ram";
	x=ur_strlen(a);
	ur_strcpy(a,d);
	ur_strcon(a,b);
	z=ur_strcpm(s1,s2);
	printf("length of a string is->%d\n",x);
	printf("copy of a string is->%s\n",d);
	printf("concat of a string is->%s\n",a);
	printf("string comparision->%d\n",z);
	ur_strrev(b);
	printf("string reverse->%s\n",b);

}
int ur_strlen(char*s)
{
	int i=0;
	while(*s!='\0')
	{
		i++;
		s++;
	}
	return i;
}
void ur_strcpy(char*a,char*b)
{
	//int i=0;
	while(*a!='\0')
	{
		*b=*a;
		//i++;
		a++;
		b++;
	}
	*b='\0';
}
void ur_strcon(char*m,char*n)
{
	//int i=0,j=0;
	while(*m!='\0')
	{
		m++;
	}
	while(*n!='\0')
	{
		*m=*n;
		m++;
		n++;
	}
	*m='\0';
}
int ur_strcpm(char*s3,char*s4)
{
	int i=0;
	while((*s3!='\0')||(*s4!='\0'))
	{
		if(*s3!=*s4)
		{
			i++;
			break;
			//return *s3-*s4;
		}
		s3++;
		s4++;
	}
	//return *s3-*s4;
	return i;
}
void ur_strrev(char* r) 
{
    int i,j,k;
    j = ur_strlen(r)-1;
    for (i=0;i<j;i++,j--) 
	{
        k=*(r+i);
        *(r+i)=*(r+j);
        *(r+j)=k;
    }
}

//void ur_strrev(char* d,char *s)
//{
//	int i=0,j=0;
//	while(*(s+i)!='\0')
//	{
//		i++;
//	}
//	while(*(s+j)!='\0')
//	{
//		i--;
//		*(d+j)=*(s+i);
//		j++;
//	}
//	*(d+j)='\0';
//
//}