//#include<stdio.h>
//int main()
//{
//	int a[5]={1,2};
//	//printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
//	//printf("%d\n",sizeof(a));
//	printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);}
//}


#include<stdio.h>
int main()
{	
	int i;
	int a[5]={1,2,3,4,5};
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		}
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
