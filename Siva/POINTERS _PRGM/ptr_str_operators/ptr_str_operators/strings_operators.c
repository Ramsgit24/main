//#include<stdio.h>
//void fun( char *);
//void main()
//{
//	char a[]="siva";
//	fun(a);
//}
//void fun(char *str)
//{
//	printf("%s\n",str);
//}



//1 POINTERS WITH STRING LENGTH

//#include<stdio.h>
//int ur_strlen(char*);
//int main()
//{
//	int s;
//	char c[]="vaddesiva";
//	s=ur_strlen(c);
//	printf("%d\n",s);
//}
//int ur_strlen(char*a)
//{
//	int i=0;
//	while(*a!='\0')
//	{
//		i++;
//		a++;
//	}
//	return i;
//}


//2.POINTERS WITH STRING COPY
//#include<stdio.h>
//void ur_strcpy(char*,char*);
//int main()
//{
//	char a[15];
//	char b[]="VADDE SIVA";
//	ur_strcpy(a,b);
//	printf("%s\n",b);
//
//}
//void ur_strcpy(char *d,char *s)
//{
//	int i=0;
//	while(*(s+i)!='\0')
//	{
//		*d=*s;
//		i++;
//		d++;
//		s++;
//		/**(d+i)=*(s+i);
//		i++;*/
//
//	}
//	//*(d+i)='\0';
//	*d='\0';
//}
////3.STRING CONCATINATION.
//
//#include<stdio.h>
//void ur_strcat(char *,char*);
//int main()
//{
//	char d[12]="VADDE ";
//	char s[]="SIVA";
//	ur_strcat(d,s);
//	printf("%s\n",d);
//}
//void ur_strcat(char *a,char *b)
//{
//	int i=0,j=0;
//	while(*a!='\0')
//	{
//		a++;
//	}
//	while(*b!='\0')
//	{
//		*a=*b;
//		a++;
//		b++;
//	}
//	*a='\0';
//}

//4.STRING COMPARISION
//#include<stdio.h>
//int ur_strcmp(char*,char*);
//int main()
//{
//	int c;
//	char j[]="siva";
//	char k[]="siva";
//	c=ur_strcmp(k,j);
//	printf("%d\n",c);
//
//}
//int ur_strcmp(char *a,char *b)
//{
//	int i=0;
//	while(*(a+i)==*(b+i) && *(a+i)!='\0' && *(b+i)!='\0')
//	{
//		i++;
//	}
//	return *(a+i)==*(b+i)? 0 : 1;
//}

//5.STRING REVERSE
#include<stdio.h>
void ur_strrev(char *);
int main()
{
	char a[]="siva";
	ur_strrev(a);
	printf("%s\n",a);

}
void ur_strrev (char *d)
{
	int i=0,j=0,temp;
	while(*(d+i)!='\0')
	{
		i++;
	}
	while(j<i)
	{
		i--;
		temp=*(d+j);
		*(d+j)=*(d+i);
		*(d+i)=temp;
		j++;
		
	}
}