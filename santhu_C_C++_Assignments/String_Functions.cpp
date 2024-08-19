#include <stdio.h>
#include <string.h>
using namespace std;
int ur_strlen(char a[]){
	int len = 0;
	while(a[len] != '\0'){
		len++;
	}
	return len; 
}
char* ur_strcpy(char d[],char s[]){
	int len = 0;
	int i = 0,j=0;
	while(d[i] != '\0'){
		s[j] = d[i];
		i++;
		j++;

	}
	s[j] = '\0';
	return s; 
}
char* ur_strcat(char s[],char d[]){

	int i=0,len=0;
	while(s[len] != '\0'){
		len++;
	}

	while(d[i] != '\0'){
		s[len] = d[i];
		len++,i++;
	}
	return s;
}
int ur_strcmp(char a[],char b[]){
	int i=0,len=0;
	while(a[len] != '\0'){
		len++;
	}
	while(i<len){
		if(a[i] != b[i]){
			return i;
		}
		else{
			i++;
		}
	}
	return 0; 
}
char* ur_strrev(char a[]){
	int i=0,len=0,j;

	while(a[len] != '\0'){
		len++;
	}

	j=len-1;
	while(i<len/2){
		char temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
	return a; 
}
int main()
{
	char a[] = "RamCharan";
	int aLength = ur_strlen(a);
	printf("String Length -> %d\n",aLength);
	char s[] = "";
	char d[] = "Pawanism";
	ur_strcpy(d,s);
	printf("Copy String Destination to Source -> %s\n",s);
	char e[20] = "Pawanism";
	char f[] = " OG";
	ur_strcat(e,f);
	printf("String ConCatination -> %s\n",e);
	char g[] = "naylaknawap";
	ur_strrev(g);
	printf("Reverse String -> %s\n",g);
	char h[] = "pawan";
	char i[] = "pawan";
	printf("Reverse String -> %d\n",ur_strcmp(h,i));
	return 0;
}