//#include<stdio.h>
//void rev(char []);
//int main()
//{
//    char s[]="siva";
//    rev(s);
//    printf("%s\n",s);
//    
//}
//void rev(char d[])
//{
//    int i=0,j=0;
//    char temp;
//    while(d[i]!='\0')
//    {
//        i++;
//    }
//    j=i-1;
//    i=0;
// while(i<j)
//    {
//        temp=d[i];
//        d[i]=d[j];
//        d[j]=temp;
//        i++;
//        j--;
//    }
//}







#include<stdio.h>
void rev(char []);
int main()
{
    char s[]="siva";
    rev(s);
    printf("%s\n",s);
    
}
void rev(char d[])
{
    int i=0,j=0;
    char temp;
    while(d[i]!='\0')
    {
        i++;
    }
    j=i-1;
    i=0;
 while(i<j)
    {
        temp=d[i];
        d[i]=d[j];
        d[j]=temp;
        i++;
        j--;
    }
}

