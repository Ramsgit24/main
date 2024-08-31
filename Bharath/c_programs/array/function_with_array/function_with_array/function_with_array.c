#include<stdio.h>
void arr_1d(int[]);
void arr_2d(int[][5]);
int main(){
	int a[5]={15,24,33,42,51};
	int b[2][5]={{101,102,103,104,105},{321,322,323,324,325}};
	arr_1d(a);
	arr_2d(b);
}
void arr_1d(int x[]){
	int i,j;
	int br[5][1];
	for(i=0;i<5;i++){
		br[i][0]=x[i];
	}
	for(i=0;i<5;i++){
		for(j=0;j<1;j++){
			printf("%d ",br[i][j]);
		}
		printf("\n");
	}
}
void arr_2d(int y[][5]){
	int i,j;
	int brr[5][2];
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			brr[j][i]=y[i][j];
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			printf("%d ",brr[i][j]);
		}
		printf("\n");
	}

}
