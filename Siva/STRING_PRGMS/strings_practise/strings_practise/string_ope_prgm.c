//#include<stdio.h>                      //string length
//int ur_strlen(char []);
//int main()
//{
//	int d;
//	char e[]="siva";
//	d=ur_strlen(e);
//	printf("%d\n",d);
//}
//int ur_strlen(char s[])
//{
//	int i=0;
//	int len=0;
//	while(s[i]!='\0')
//	{
//		i++;
//		len++;
//	}
//	return len;
//}

//#include<stdio.h>                                    //string copy
//int ur_strcpy(char [],char []);
//int main()
//{
//	int a;
//	char s[]="siva";
//	char d[10];
//	a=ur_strcpy(d,s);
//	printf("%s\n",a);
//
//}
//int ur_strcpy(char d[],char s[])
//{
//	int i=0;
//	while(s[i]!='\0')
//	{
//		d[i]=s[i];
//		i++;
//	}
//	d[i]='\0';
//	return d;
//}
////
//#include<stdio.h>                          //string concatination
//void ur_strcat(char [],char []);
//int main()
//{
//	//int a;
//	char d[15]="dheeraj ";
//	char s[]="divya";
//	ur_strcat(d,s);
//	printf("%s\n",d);
//}
//void ur_strcat(char d[],char s[])
//{
//	int i=0,j=0;
//	while(d[i]!='\0')
//	{
//		i++;
//	}
//	while(s[j]!='\0')
//	{
//		d[i]=s[j];
//		i++;
//		j++;
//	}
//	d[i]='\0';
//	//return d;
//} 

//#include<stdio.h>                    //string comparision
//int ur_strcmp(char [],char []);
//int main()
//{
//	int a;
//	char b[]="siva";
//	char g[]="siva1";
//	a=ur_strcmp(b,g);
//	printf("%d",a);
//}
//int ur_strcmp(char d[],char c[])
//{
//	int i=0,s=0;
//	while(c[i]!='\0'||d[i]!='\0')
//	{
//		if(c[i]!=d[i])
//		{
//			s=1;
//			break;
//		}
//		i++;
//	}
//	return s;
//}


//#include <stdio.h>           // string reverse
//void ur_strrev(char[]);
//int main() 
//{
//    char d[]="siva";
//    ur_strrev(d);
//}
//void ur_strrev(char a[])
//{
//    int i,t,j,l=0;
//    while(a[l]!='\0')
//    {
//        l++;
//    }
//    for(i=0,j=l-1;i<j;i++,j--)
//    {
//            t=a[i];
//            a[i]=a[j];
//            a[j]=t;
//    }
//    printf("%s\n",a);
//    
//}


