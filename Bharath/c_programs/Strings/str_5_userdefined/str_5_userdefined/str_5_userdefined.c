#include<stdio.h>
int str_len(char[]);
void str_cpy(char[],char[]);
void str_cat(char[],char[]);
void str_rev(char[]);
int str_cmp(char[],char[]);

int main(){ 
	                       
	int t;
	char first_name[20]="Bharath";
	char last_name[7]="Kumar";
	char copy_name[10];
	char com[10]="Ramandeep";
	char cam[10]="ramandeep";
	int a=str_len(first_name);
	printf("%d ",a);
	str_cpy(copy_name,first_name);
	printf("%s ",copy_name);
	str_cat(first_name,last_name);
	printf("%s ",first_name);
	str_rev(first_name);
	printf("%s ",first_name);
	t=str_cmp(com,cam);
	printf("%d ",t);
	t=strcmp(com,cam);
	printf("%d ",t);


}
int str_len( char a[]){
	int i=0;
	while(a[i]!=0){
		i++;
	}
	return i;
}
void str_cpy(char b[], char c[]){
	int i=0;
	while(c[i]!=0){
		b[i]=c[i];
		i++;
	}
	b[i]='\0';
	//printf("%s",b);
	
}
void str_cat(char d[],char e[]){
	int i=0;
	int j=0;
	while(d[i]!='\0'){
		i++;
	}
	while(e[j]!='\0'){
		d[i]=e[j];
		i++;
		j++;
	}
}
void str_rev( char f[]){
	int i=0,j=0;
	int len=0;
	char temp;
	while(f[len]!='\0'){
		len++;
	}
	j=len-1;
	for(i=0;i<len/2;i++){
		temp=f[i];
		f[i]=f[j];
		f[j]=temp;
		j--;
	}
}
int str_cmp(char g[],char h[]){
	int i=0,j=0;
	/*int l1=0,l2=0;
	while(g[l1]!='\0'){
		l1++;
	}
	while(h[l2]!='\0'){
		l2++;
	}*/
	while(g[i]!='\0' && h[i]!='\0')
	{
		if(g[i]==h[i]){
			i++;
		}
		else{
			return 1;
		}
	}
	return 0;
	/*if(l1<l2){
		return -1;
	}else if(l1>l2){
		return 1;
	}else{
	while(g[i]!='\0'){
		if(g[i]==h[i]){
			i++;
		}else if(g[i]>h[i]){
			return 1;
		}else{a 
			return -1;
		}	
	}
	return 0;
	}*/

}


#include<stdio.h>
void str_cat(char[],char[]);
int main(){ 
	                       
	int t;
	char first_name[20]="Bharath";
	char last_name[7]="Kumar";

	str_cat(first_name,last_name);
	printf("%s ",first_name);
	
}
void str_cat(char d[],char e[]){
	int i=0;
	int j=0;
	while(d[i]!='\0'){
		i++;
	}
	while(e[j]!='\0'){
		d[i]=e[j];
		i++;
		j++;
	}
}