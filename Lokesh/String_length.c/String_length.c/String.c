//#include<stdio.h>
//#include<string.h>
//int ur_strlen(const char[]);
//int main(){
//	char a[]="Bharath";
//	int len=strlen(a);
//	int length1=ur_strlen(a);
//	printf("length %d",a);
//}
//int ur_strlen(const char e[]){
//	int i=0;
//	for(;e[i]!='\0';i++);
//	return i;
//	/*
//	int i=0;
//	int len=0;
//	while(e[i]!='\0'){
//	i++;
//	len++;
//	}
//	return len;//return len1;*/
//
//}


                    //length
//#include<stdio.h>
//#include<string.h>
//int length(char[]);
//int main()
//{
//	int B;
//	char S[]="LLLLLL";
//	B=length(S);
//	printf("%d ",B);
//	B=strlen(S);
//	printf("%s\n",S);
//}
//int length(char a[])
//{
//    int i=0;
//	int leng=0;
//	while(a[i]!='\0')
//	{
//		i++;
//		leng++;
//
//	}
//	return leng;
//}

                        //copy
//#include<stdio.h>
//#include<string.h>
//void copy(char[],char[]);
//int main()
//{
//    char A[]="lokesh";
//    char b[10];
//    copy(A,b);
//    printf("%s",b);
//      
//}
//void copy(char i[],char p[])//a,b
//{
//    int r=0;
//    while(i[r]!='\0')
//    {
//        p[r]=i[r];
//        r++;  
//        
//    } 
//   p[r]='\0';
//}

                                  //concatination
//#include<stdio.h>
//#include<string.h>
//void con_cat(char[],char[]);
//int main()
//{
//	char x[20]="good";
//	char y[]="morning";
//	con_cat(x,y);
//	printf("%s \n",x);
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
//		a[i]=b[j];
//		i++;
//		j++;
//	}
//	a[i]='\0';
//}





//LENGTH

//#include<stdio.h>
//#include<string.h>
//int length(char []);
//void cpy(char [],char []);
//int main()
//{
//	int Q;
//	char b[]="BHARATH";
//	char A[15];
//	char B[]="siva";
//	Q=length(b);
//	cpy(A,B);
//	printf("%s\n",A);
//	printf("%d\n",Q);
//
//
//}
//int length(char a[])
//{
//	int i=0;
//	while(a[i]!='\0')
//	{
//		i++;
//	}
//	return i;
//}
//void cpy(char p[],char q[])
//{
//	int j=0,l=0;
//	while(q[j]!='\0')
//	{
//		p[l]=q[j];
//		j++;
//		l++;
//	}
//	p[l]='\0';
//}


//CONCATINATION
//#include<stdio.h>
////#include<string.h>
//void concat(char [],char []);
//int main()
//{
//	char a[15]="lokesh";
//	char b[]="leader";
//	concat(a,b);
//	printf("%s\n",a);
//}
//void concat(char d[],char s[])
//{
//	int i=0;
//	int j=0;
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
//}
//
//
//string comparison
//#include<stdio.h>
//int str_cmp(char[],char[]);
//int main(){
//	int p;
//	char a[]="Bharath";
//	char b[]="Bhara";
//	p=str_cmp(a,b);
//	printf("%d ",p);
//	//a[5]='k';
//	//printf("%s",a);
//	
//
//}
//int str_cmp(char r[],char f[]){
//	int i=0;
//	while(r[i]==f[i] && r[i]!='\0' && f[i]!='\0'){
//		i++;
//	}
//	return r[i]==f[i]? 0: 1;
//
//}


//string reverse
//#include<stdio.h>
//void str_rev(char[]);
//int main(){
//	char a[]="Bharath";
//	str_rev(a);
//	printf("%s\n",a);
//}
//void str_rev(char b[]){
//	int i=0;
//	int j=0;
//	char temp;
//	while(b[i]!='\0'){
//		i++;
//	}
//	j=i-1;
//	i=0;
//	while(i<j){
//		temp=b[i];
//		b[i]=b[j];
//		b[j]=temp;
//		i++;
//		j--;
//	}
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
