#include<stdio.h>
int main(){
	int a[]={12,43,23,11,32,42,4,2,4,7,32};
	int size=sizeof(a)/sizeof(a[0]);
	int i=0;
	int j=0;
	int temp=0;
	int min=a[0];
	for(i=0;i<size;i++){
		for(j=1;j<size;j++){
			if(a[j]<min){
				min=a[j];
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}

}