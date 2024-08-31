//#include<stdio.h>
//int main()
//{
//	int a[5];
//	printf("%p %p %p %p %p\n",&a[0],&a[1],&a[2],&a[3],&a[4]);
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int i;
//	int a[5]={12,123,1234};
//	for(i=0;i<5;i++){
//		printf("%d ",a[i]);
//	}
//	
//}

//#include<stdio.h>
//int main(){
//	int i;
//	int a[5]={12,123,1234};//intializtion
//	a[3]=6;//modification or update
//	a[4]=87;//modification or update
//	a[1]=675;//modification or update
//	for(i=0;i<5;i++){
//		printf("%d ",a[i]);
//	}
//}



#include<stdio.h>
#define SiZe 12
int main(){
	int i;
	int size=20;
	int arr[SiZe]={21};
	for(i=0;i<=15;i++){
	printf("%p\n",&arr[i]);
	}

}