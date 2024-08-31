#include<stdio.h>
void str_rev(char []);
int main(){
	char name[]="Bharath";
	/*strrev(name);
	printf("%s\n",name);*/
	str_rev(name);
}
void str_rev(char bb[]){
	int i=0,j=0,len=0;
	char temp;
	while(bb[len]!='\0'){
		len++;
	}
	j=len-1;
	while(i<j){
		temp=bb[i];
		bb[i]=bb[j];
		bb[j]=temp;
		i++;
		j--;
	}
	printf("%s\n",bb);
}

