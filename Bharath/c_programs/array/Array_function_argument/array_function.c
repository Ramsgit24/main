#include<stdio.h>
int add_array(int*);
int main(){
	int sum=0;
	int a[]={10,20,30,40,50};
	sum=add_array(a);

}
int add_array(int* arr){
	int i=0;
	int sum=0;
	int size=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<size;i++){
		sum+=arr[i];
	}
	return sum;

}