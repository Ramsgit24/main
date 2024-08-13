//#include<stdio.h>
//int main(){
//	auto x,y,z;
//	int i;
//	int a[5];
//	char b[9];
//	float c[6];
//	double d[8];
//
//	a[0]=20;
//	a[1]=21;
//	a[2]=22;
//	a[3]=23;
//	a[4]=24;
//
//	printf("%d %d %d %d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
//
//	for(i=0;i<=4;i++){
//		printf("%d ",a[i]);
//	}
//
//	printf("%d\n",&a);
//
//	printf("%d\n",&a[0]);
//	printf("%d\n",&a[1]);
//	printf("%d\n",&a[2]);
//	printf("%d\n",&a[3]);
//	printf("%d\n",&a[4]);
//
//	printf("%d\n",sizeof(x));
//}

//static
#include<stdio.h>
static int x=10;
int fun(){
	static int y=20,z;
	z=x+y;
	return z;
}

int main(){
	int a;
	a=fun();
	printf("%d\n",a);
}