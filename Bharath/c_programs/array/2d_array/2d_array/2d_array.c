//#include<stdio.h>
//void arr_2d_int();
//void arr_2d_char();
//void arr_2d_float();
//void arr_2d_double();
//int main(){
//	arr_2d_int();
//	arr_2d_char();
//	/arr_2d_float();
//	arr_2d_double();
//}
//void arr_2d_int(){
//	int i,j;
//	int a[3][4]={{10,20,30,40},
//				{50,60,70,80},
//				{90,100,110,120}};
//	for(i=0;i<3;i++){
//		for(j=0;j<4;j++){
//			//printf("a[%d][%d]=%d ",i,j,a[i][j]);
//			printf("%d ",a[i][j]);//
//			printf("%p ",&a[i][j]);
//			printf("%d ",*(*(a+i)+j));//using pointer referance
//			printf("%p ",*(a+i)+j);//pointer address
//		}
//		printf("\n");
//	}
//}
//void arr_2d_char(){
//	int k,l;
//	char b[2][3]={{'a',56,'='},
//				{'*','|',70},
//				};
//	for(k=0;k<2;k++){
//		for(l=0;l<3;l++){
//			printf("%c ",b[k][l]);
//			printf("%p ",&b[k][l]);
//			printf("%d ",*(*(b+k)+l));
//			printf("%p ",*(b+k)+l);
//		}
//		printf("\n");
//	}
//}
//void arr_2d_float(){
//	int a,b;
//	float c[3][2]={{10.23f,20.54f},
//				   {50.9723f,60.764f},
//				   {90.863f,100.927f}};
//	for(a=0;a<3;a++){
//		for(b=0;b<2;b++){
//			printf("%f ",c[a][b]);
//			printf("%p ",&c[a][b]);
//			//printf("%x ", *(c+a)+b);
//			printf("%f ",*(*(c+a)+b));
//			printf("%p ", *(c+a)+b);
//
//		}
//		printf("\n");
//	}
//}
//void arr_2d_double(){
//	int l,m;
//	double a[4][3]={{10.323,20.234,30.092857448},
//				{50.432,60.123,70.981},
//				{90.890,100.843,110.927},
//				{90.4875,100.3624,110.695}};
//	for(l=0;l<4;l++){
//		for(m=0;m<3;m++){
//			printf("%lf ",a[l][m]);
//			printf("%p ",&a[l][m]);
//			printf("%lf ",*(*(a+l)+m));
//			printf("%p ",*(a+l)+m);
//		}
//		printf("\n");
//	}
//
//}