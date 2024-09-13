//#include<stdio.h>
//#include<stdlib.h>
//void fun();
//void main()
//{
//	fun();
//	fun();
//	fun();
//	fun();
//
//}
//void fun()
//{
//	int n=5;
//	int *ptr=(int*)malloc(n*sizeof(int));
//	if(ptr!=NULL)
//	{
//		*(ptr)=100;
//		*(ptr+1)=200;
//		*(ptr+2)=300;
//		*(ptr+3)=400;
//	}
//	printf("%d %d %d %d \n",*ptr,*(ptr+1),*(ptr+2),*(ptr+3));
//	printf("%d %d %d %d \n",ptr,(ptr+1),(ptr+2),(ptr+3));
//	free(ptr);
//}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=3;
	int *ptr=(int*)malloc(n*sizeof(int));
	if(ptr!=NULL)
	{
		*ptr=100;
		*(ptr+1)=200;
		*(ptr+2)=300;
	}
	printf("%d %d %d \n",*ptr,*(ptr+1),*(ptr+2));
	printf("%d %d %d \n",ptr,(ptr+1),(ptr+2));
	free(ptr);
}
	