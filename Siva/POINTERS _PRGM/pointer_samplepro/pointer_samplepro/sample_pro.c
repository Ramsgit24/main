//#include<stdio.h>
//int main()
//{
//	int a=10;
//	char b='A';
//	float c=10.10f;
//	double d=20.00;
//	int *ptr=&a;
//	char*cptr=&b;
//	float*fptr=&c;
//	double*dptr=&d;
//	*ptr=100;
//	printf(" the integer %d-%d-%d\n",&a,&ptr,*ptr);
//	printf("the charactor %d-%d-%c\n",&b,&cptr,b);
//	printf(" the float %d-%d-%f\n",&c,&fptr,c);
//	printf("double %d-%d-%lf\n",&d,&dptr,d);
//
//}
//
////NULL POINTERS
#include<stdio.h>
int main()
{
int *s=NULL;
if(s!=NULL);
{
	*s=100;
}
printf("%d\n",&s);
}
 
//#include<stdio.h>
//int main()
//{
//	int x=10;
//	int *ptr=&x;
//	int**dptr=&ptr;
//	int ***tptr=&dptr;
//	printf("%d-%d-%d\n",&x,&ptr,*ptr);
//	printf("%d-%d-%d\n",&ptr,&dptr,**dptr);
//	printf("%d-%d-%d\n",&dptr,&tptr,***tptr);
//}

