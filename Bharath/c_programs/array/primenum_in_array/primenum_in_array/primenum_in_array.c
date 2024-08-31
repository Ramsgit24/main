#include<stdio.h>
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i,j,count=0;
	for(i=0;i<10;i++){
		
		for(j=1;j<i;j++){
			if(arr[i]%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d ",arr[i]);
		}
		
	}
}