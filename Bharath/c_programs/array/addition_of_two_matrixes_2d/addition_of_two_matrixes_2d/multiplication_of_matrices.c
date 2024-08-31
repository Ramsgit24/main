//
//#include<stdio.h>
//#define i 2
//#define j 2
//
//
//int main(){
//	int a,b,c;
//	int arr[i][j];
//	int brr[i][j];
//	int crr[i][j];
//	printf("enter the elements for (%d * %d) matrix",i,j);
//	for(a=0;a<i;a++){
//		for(b=0;b<j;b++){
//			scanf("%d",&arr[a][b]);
//		}
//	}
//	printf("you entered elements for arr(%d * %d) matrix is \n",i,j);
//	for(a=0;a<i;a++){
//		for(b=0;b<j;b++){
//			printf("%d ",arr[a][b]);
//		}
//		printf("\n");
//	}
//	//2nd matrix
//	printf("enter the elements for 2nd (%d * %d) matrix",i,j);
//	for(a=0;a<i;a++){
//		for(b=0;b<j;b++){
//			scanf("%d",&brr[a][b]);
//		}
//	}
//	printf("you entered elements for 2nd arr(%d * %d) matrix is \n",i,j);
//	for(a=0;a<i;a++){
//		for(b=0;b<j;b++){
//			printf("%d ",brr[a][b]);
//		}
//		printf("\n");
//	}
//	//multipling two matrices
//	printf("multiplication of two matrices is:\n");
//	for(a=0;a<i;a++){
//		for(b=0;b<j;b++){
//			crr[a][b]=0;
//			for(c=0;c<j;c++){
//				crr[a][b]=crr[a][b]+ arr[a][c]*brr[c][b];
//			}
//		}
//	}
//
//	printf("multiplication of rsultant is:\n");
//	for(a=0;a<i;a++){
//		for(b=0;b<j;b++){
//			printf("%d ",crr[a][b]);
//		}
//		printf("\n");
//	}
//	
//
//
//
//}