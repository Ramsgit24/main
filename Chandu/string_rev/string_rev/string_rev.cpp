#include <stdio.h>
void str_rev(char[],char []);
int main() {
    char c[]="chandu";
    char d[10];
    str_rev(c,d);
    printf("%s",d);
    
}
void str_rev(char a[],char b[])
{
    int i=0,j;
    while(a[i]!='\0')
    {
        i++;
    }
    for(j=0;j<i;j++)
    {
        b[j]=a[i-1-j];
    }
    b[j]='\0';
}

//#include <stdio.h>
//void str_rev(char []);
//int main() {
//    char c[]="chandu";
//    str_rev(c);
//    //printf("%s",c);
//    
//}
//void str_rev(char b[])
//{
//    int i=0,j;
//    while(b[i]!='\0')
//    {
//        i++;
//    }
//    for(j=i-1;j>=0;j--)
//    {
//        printf("%c",b[j]);
//    }
//   
//}