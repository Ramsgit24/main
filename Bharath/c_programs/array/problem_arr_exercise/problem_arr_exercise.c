//#include<stdio.h>
//int main(){
//	int i;
//	int sum=0;
//	int mul=1;
//	int arr[10]={4,2,5,7,21,7,4,5,6,9};
//	int size=sizeof(arr)/sizeof(int);
//	for(i=0;i<size;i++){
//		if(arr[i]%2==0){
//			sum=sum+arr[i];
//		}else{
//			mul=mul*arr[i];
//		}
//	}
//	printf("addition of even numbers elements in array is %d\n",sum);
//	printf("multiplication of odd numbers elements in array is %d\n",mul);
//}


//reverse first n elements of an array
#include<stdio.h>

int main(){
	int i=0,j;
	int temp;
	int arr[10]={10,23,54,2,13,45,34,6,74,9};
	int num;
	

	scanf("%d",&num);
	j=num-1;
	while(i<j){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}

}