//#include<stdio.h>
//int main()
//{
	//int a[5]={10,20,30,40,50};
	//printf("%d %d %d %d %d \n",a[0],a[1],a[2],a[3],a[4]);
	/*int a[5]={10,20};
     printf(" %d\n %d\n %d\n %d\n %d \n",a[0],a[1],a[2],a[3],a[4]);
	 printf("%d \n",sizeof(a));*/
	/*int a[4]={12,13,14,15};
	int i;*/
	/*for(i=0;i<4;i++)
		printf("%d\n",a[i]);*/
	/*scanf("%d",&a[0]);
	scanf("%d",&a[1]);
	scanf("%d",&a[2]);
	scanf("%d",&a[3]);*/
	/*for(i=0;i<4;i++)
	{
		printf("%d ",a[i]);
	}*/
	/*int a[4]={12,13,14,15};
	int i;
		for(i=0;i<4;i++)
		{
          scanf("%d",&a[i]);
		}
		for(i=0;i<4;i++)
		{
			printf("%d ",a[i]);
		}
}*/
#include<stdio.h>
int main()
{
	int a[10],i;
	printf("enter a number");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);//a[0]=00;
	}
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}