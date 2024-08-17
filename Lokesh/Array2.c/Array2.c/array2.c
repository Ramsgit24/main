//#include<stdio.h>
//int main()
//{
//	int a[2]={12,33};
//	char c[4]={'s','i','v','a'};
//	float f[2]={22.44f,4.33f};
//	double d[2]={2222222,3333333};
//	printf("%d %d\n",a[0],a[1]);
//	printf("%c %c %c %c\n",c[0],c[1],c[2],c[3]);
//	printf("%f %f\n",f[0],f[1]);
//	printf("%lf %lf\n",d[0],d[1]);
//}
//#include<stdio.h>
//int main()
//{
//	int a[2];
//	char c[2];
//	a[0]=10;
//	a[1]=20;
//	c[0]='A';
//	c[1]='B';
//	printf("%d %d\n",a[0],a[1]);
//	printf("%c %c\n",c[0],c[1]);
//}
#include<stdio.h>
int main()
{
	int i,a[2];
	a[0]=12;
	a[1]=23;
	for(i=0;i<2;i++)
	{
		printf("enter a value for a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<2;i++)
	{
		printf("%d-%d\n",a[i],*(a+i));
		printf("%d -%d\n",&a[i],(a+i));
	}
	printf("%d\n",(a+1));
	printf("%d\n",(&a+1));
}