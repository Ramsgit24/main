#include<stdio.h>
int main(){
	int arr[6]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int a=10;
	int i;
	int pos=3;
	int temp;
	for(i=size;i>pos;i--){
		arr[i]=arr[i-1];
	}
	  arr[pos] = a;
    size++;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}