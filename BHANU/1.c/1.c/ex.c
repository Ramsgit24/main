#include<stdio.h>
int main(){
	int n,i,*ptr;
	printf("enter n:");
	scanf("%d",&n);
	*ptr = (int*)malloc(5,sizeof(intt));
	printf("enter values are :");
	for(i=0;i<n;i++){
		scanf("%d",&ptr[i]);
	}


}