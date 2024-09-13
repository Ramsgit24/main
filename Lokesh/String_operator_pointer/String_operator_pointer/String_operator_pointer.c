//#include<stdio.h>
//int strlen(char*);
//int main()
//{
//	int a;
//	char b[]="heloo";
//	a=strlen(b);
//	printf("%d",a);
//
//}
//int strlen(char*c)
//{
//	int i=0;
//	while(*c!='\0')
//	{
//		i++;
//		c++;
//	}
//	return i;
//}
//
//


//#include<stdio.h>
//void strcpy(char*,char*);
//int main()
//{
//	char x[10];
//	char y[]="loki";
//    strcpy(x,y);
//		printf("%s\n",x);
//
//}
//void strcpy(char* c,char* d)
//{
//   int i=0;
//   while(*d!='\0')
//   {
//	   /**c[i]=*d[i];*/
//	   *(c)=*(d);
//	   c++;
//	   d++;
//	  
//   }
//   c[i]='\0';
//}



#include<stdio.h>
void str_cpy(char*,char*);
int main()
{
    char x[10];
    char y[]="lokesh";
    str_cpy(x,y);
    printf("%s\n",x);
}
void str_cpy(char*a,char*b)
{
    int i=0;
    while(*a!='\0')
    {
        *a=*b;
		a++;
        b++;
    }
	*a='\0';
}
