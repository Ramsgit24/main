#include<stdio.h>
#define size 10
int sum_of_high_low_element_in_array(int[]);
int highst_element_in_array(int[]);
int lowest_element_in_array(int[]);
int main(){
	int arr[size],i,a,b,c;
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	a=highst_element_in_array(arr);
	b=lowest_element_in_array(arr);
	c=sum_of_high_low_element_in_array(arr);
	printf("lowest element in an array %d",c);
	printf("sum of high and lowest elements in an array %d",c);
	printf("sum of high and lowest elements in an array %d",c);
}
int sum_of_high_low_element_in_array(int brr[]){
	int a=highst_element_in_array(brr);
	int b=lowest_element_in_array(brr);
	return (a+b);
}
int highst_element_in_array(int brr[]){
	int i;
	int max=brr[0];
	for(i=0;i<size;i++){
		if(brr[i]>max){
			max=brr[i];
		}
	}
	return max;
}
int lowest_element_in_array(int brr[]){
	int i;
	int min=brr[0];
	for(i=0;i<size;i++){
		if(brr[i]<min){
			min=brr[i];
		}
	}
	return min;
}