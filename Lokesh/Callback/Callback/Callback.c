//#include<stdio.h>
//int main()
//{
//	int x=10;
//	int *ptr=&x;                   NORMAL CONVERSTION
//	//*ptr->20;
//	*ptr=30;
//	printf("%d\n",*ptr);
//	printf("%p\n",ptr);
//}


//#include<stdio.h>
//int main()
//{
//	int x=10;
//	int *const ptr=&x;                     ADDRESS CANT CHANGE
//	*ptr=30;
//	printf("%d\n",x);
//	printf("%p\n",ptr);
//}
//	




#include<stdio.h>
int main()
{
	int x=30;
	const int*ptr=&x;
	ptr=&x;
	ptr++;
	printf("%d",x);
	printf("%p",ptr);
}
	