//STRING LENGTH


//#include<stdio.h>
//#include<string.h>
//int stlen(char[]);
//int main()
//{
//	int y;
//	char x[]="lokeswara";
//	y=stlen(x);
//	printf("%d",y);
//}
//int stlen(char a[])
//{
//	int i=0;
//	while(a[i]!='\0')
//	{
//		i++;
//	}
//	return i;
//}




// STRING COPY



//#include<stdio.h>
//#include<string.h>
//void str_cpy(char[],char[]);
//int main()
//{
//   char x[10];
//   char y[]="lokesh";
//   str_cpy(x,y);
//   printf("%s",x);
//
//}
//void str_cpy(char a[],char b[])
//{
//	int i=0,j=0;
//	while(b[i]!='\0')
//	{
//		a[i]=b[i];
//		i++;
//		j++;
//	}
//	a[i]='\0';
//}



//STRING CONCATINATION


//#include<stdio.h>
//void con_cat(char[],char[]);
//int main()
//{
//	char x[15]="loki";
//	char y[]="lokesh";
//    con_cat(x,y);
//	printf("%s",x);
//
//}
//void con_cat(char a[],char b[])
//{
//	int i=0,j=0;
//	while(a[i]!='\0')
//	{
//		i++;
//	}
//	while(b[j]!='\0')
//	{
//       a[i]=b[j];
//	   i++;
//	   j++;
//	}
//	a[i]='\0';
//}



//STRING COMPARASION

//#include<stdio.h>
//int str_cmp(char [],char []);
//int main()
//{
//	int c;
//	char x[10]="lokesh";
//	char y[]="lokeh";
//	c=str_cmp(x,y);
//	printf("%d",c);
//
//}
//int str_cmp(char a[],char b[])
//{
//	int i=0,j=0;
//	while(a[i]==b[j] && a[i]!='\0' && b[j]!='\0')
//	{
//		i++;
//	}
//	return i;
//}
//


//#include<stdio.h>
//int str_cmp(char [],char []);
//int main()
//{
//	int c;
//	char x[10]="lokesh";
//	char y[]="lokesh";
//	c=str_cmp(x,y);
//	printf("%d",c);
//
//}
//int str_cmp(char a[],char b[])
//{
//	int i=0,j=0;
//		while(a[i]!='\0' || b[i]!='\0')
//		{
//			if(a[i]!=b[i])
//			{
//				j++;
//				break;
//			}
//			i++;
//
//			
//		}
//		return j;
//	}
//




#include<stdio.h>
#include<string.h>
int str_cmp(char[],char[]);
int main()
{
	int c;
	char r[]="lokesh";
	char s[]="lokeh";
	c=str_cmp(r,s);
	printf("%d",c);
}
int str_cmp(char a[],char b[])
{
	int i=0;
	while(a[i]==b[i] && a[i]!='\0' && b[i]!='\0')
	{
		i++;
	}
	return a[i]==b[i]? 0:1;
}

