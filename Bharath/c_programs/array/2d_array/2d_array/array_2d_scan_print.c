#include<stdio.h>
void arr_2d_int();
void arr_2d_char();
void arr_2d_float();
void arr_2d_double();

int main(){
	
	arr_2d_int();
	/*arr_2d_char();
	arr_2d_float();
	arr_2d_double();*/

}
void arr_2d_int(){
	int i,j;
	int a[3][3];
	int b[3][3];
	int c[3][3];
	printf("enter the elements of 1st array/matric");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of 1st array/matric");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

	/*for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",*(*(a+i)+j));
		}
		printf("\n");
	}*/
}

void arr_2d_char(){
	int i,j;
	char a[2][3];
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf(" %c",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%c ",*(*(a+i)+j));
		}
		printf("\n");
	}
}

void arr_2d_float(){
	int i,j;
	float a[3][2];
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%f",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%f ",*(*(a+i)+j));
		}
		printf("\n");
	}
}

void arr_2d_double(){
	int i,j;
	double b[3][1];
	for(i=0;i<3;i++){
		for(j=0;j<1;j++){
			scanf("%lf",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<1;j++){
			printf("%lf ",*(*(b+i)+j));
		}
		printf("\n");
	}
}