#include<stdio.h>
#include<string.h>
void ur_strrev(char[]);
int main(){
	char a[10]="hello";
	char b[10]="Bharath";
	ur_strrev(b);
	strrev(a);
	printf("%s",a);
}
void ur_strrev(char r[]){
	int i=0,j;
	int len=0;
	char temp;
	while(r[len]!='\0'){
		len++;
	}
	j=len-1;
	for(i=0;i<len/2;i++){
		temp=r[i];
		r[i]=r[j];
		r[j]=temp;
		j--;
	}

	printf("%s",r);

}
