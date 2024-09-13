//#include<stdio.h>
//int main()
//{
//	int* ptr;             //uninstalized values these is wild pointer
//    //*ptr =11;
//
//}

#include<stdio.h>             //syntax for NULL POINTERS
int main()
{
	int* ptr=NULL;
	printf("%d",ptr);
	if(ptr!=NULL)
	{
	*ptr=30;
	}
}

