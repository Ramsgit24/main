//#include<stdio.h>
//int main(){
//	int a[]={10,3,5,4,7,6,2,5,9};
//	int temp=0;
//	int size=sizeof(a)/sizeof(a[0]);
//	int i=0;
//	int j=0;
//	for(i=0;i<size-1;i++){
//		for(j=0;j<size-i-1;j++){
//			if(a[j]>a[j+1]){
//				temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//			}
//		}
//	}
//	for(i=0;i<size;i++){
//		printf("%d ",a[i]);
//	}
//}