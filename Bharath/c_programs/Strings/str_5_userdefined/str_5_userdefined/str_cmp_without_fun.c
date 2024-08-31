//#include<stdio.h>
//int main(){
//	int i=0,j=0;
//	char a[]="ram";
//	char b[]="ram";
//	while(a[i]!='\0'){
//		i++;
//	}
//	while(b[j]!='\0'){
//		j++;
//	}
//	if(i==j){
//		i=0;j=0;
//		while(a[i]!='\0'){
//			if(a[i]!=b[i]){
//				j++;
//				break;
//			}
//			i++;
//		}
//		if(j==1){
//			printf("not same strings");
//		}
//		else{
//			printf("same strings");
//		}
//	}else{
//		printf("not same strings");
//	}
//}

#include<stdio.h>
int str_cmp(char[],char []);
int main(){
	char name[]="bhara";
	char name1[]="bharath";
	int a=str_cmp(name,name1);
	printf("%d ",a);
}
int str_cmp(char a[],char b[]){
	int i=0;
	for(i=0;a[i]!='\0' && b[i]!='\0' && a[i]==b[i];i++);
	return ((a[i]-b[i]==0)?0:1);

}