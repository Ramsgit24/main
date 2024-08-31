#include<stdio.h>
#include<string.h>
int ur_strlen(const char[]);
int main(){
	char a[]="Bharath";
	int len=strlen(a);
	int length1=ur_strlen(a);
}
int ur_strlen(const char e[]){
	int i=0;
	for(;e[i]!='\0';i++);
	return i;
	/*
	int i=0;
	int len=0;
	while(e[i]!='\0'){
	i++;
	len++;
	}
	return len;//return len1;*/

}


//string copy
//#include<stdio.h>
//#include<string.h>
//void ur_strcpy(char[],const char[]);
//int main(){
//	char a[]="Bharath";
//	char c[]="Bharath kumar";
//	char b[20];
//	char d[20];
//	strcpy(b,a);
//	ur_strcpy(d,c);
//	printf("%s",d);
//	printf("%s",b);
//
//}
//void ur_strcpy( char e[],const char r[]){
//	int i=0;
//	for(;r[i]!='\0';i++){
//		e[i]=r[i];
//		
//	}
//	e[i]='\0';
//	printf("%s",e);
//}