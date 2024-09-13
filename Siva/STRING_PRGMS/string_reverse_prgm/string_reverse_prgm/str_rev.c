#include <stdio.h>
void ur_strrev(char[]);

int main() 
{
    char d[]="siva";
    ur_strrev(d);
}
void ur_strrev(char a[])
{
    int i,t,j,l=0;
    while(a[l]!='\0')
    {
        l++;
    }
    for(i=0,j=l-1;i<j;i++,j--)
    {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
    }
    printf("%s\n",a);
    
}




//#include<stdio.h>
//int main()
//{
//	
//	char a[]="siva";
//	int i=0;
//	int j=0;
//	int len=0;
//	char temp;
//	while(a[i]!='\0')
//{
//	i++;
//}
//	len=i-1;
//	while(j<i/2)
//	{
//		temp=a[j];
//		a[j]=a[len];
//		a[len]=temp;
//		j++;
//		len--;
//	}
//	printf("%s\n",a);
//}
//
