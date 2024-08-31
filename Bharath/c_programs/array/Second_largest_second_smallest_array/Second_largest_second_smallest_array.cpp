#include<iostream>
using namespace std;
void sort_elements_of_arrayA(int []);
void sort_elements_of_arrayD(char []);

int main(){
	int arr[5]={5,4,6,3,7};
	int size=sizeof(arr)/sizeof(int);
	char name[7]={'B','h','a','r','a','t','h'};
	int a;
	sort_elements_of_arrayA(arr);
	printf("seond largest number is: %d\n",arr[size-2]);
	for(a=0;a<5;a++){
		printf("%d ",*(arr+a));
	}	
	sort_elements_of_arrayD(name);
	for(a=0;a<7;a++){
		printf("%c ",*(name+a));
	}	
}
void sort_elements_of_arrayA(int c[]){
	int i=0;
	int j;
	int temp=0;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(c[i]>c[j]){
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
}
void sort_elements_of_arrayD(char ss[]){
	int i=0;
	int j;
	int temp=0;
	for(i=0;i<7;i++){
		for(j=i+1;j<7;j++){
			if(ss[i]>ss[j]){
				temp=ss[i];
				ss[i]=ss[j];
				ss[j]=temp;
			}
		}
	}
}