//#include<stdio.h>
//int main()
//{
//	int x=20;
//	int *ptr=&x;
//	int **dptr=&ptr;
//	int ***tptr=&dptr;
//	 
//	
//	printf("the single pointer \n");
//	printf("the pointer variable x is %d \n",x);
//	printf("the pointer address is x is %d\n",&x);
//	printf("the pointer address is %d \n",*ptr);
//
//	printf("the double pointer \n");
//	printf("the pointer variable is %d \n",&x);
//	printf("the pointer address is %d \n",*ptr);
//	printf("the double pointer is %d\n",**dptr);
//
//
//	printf("the triple pointer \n");
//	printf("the pointer variable is %d \n",&x);
//	printf("the pointer address is %d \n",*ptr);
//	printf("the triple pointer is %d\n",**dptr);
//	printf("the triple pointer is %d\n",***tptr); 
//}


#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=&a;
	int **dptr=&ptr;
	int ***tptr=&dptr;
	int ****qptr=&tptr;
	
	/*printf("single pointer:\n");
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
	printf("%d\n",&ptr);*/

	printf("double pointer:\n");
	printf("%d\n",a);//2000
	printf("%d\n",&a);//100
	//printf("%d\n",ptr);//
	//printf("%d\n",*ptr);
	//printf("%d\n",&ptr);
	//printf("%d\n",**dptr);
	printf("%d\n",*dptr);
	printf("%d\n",&ptr);
	printf("%d\n",dptr);
	****qptr=1111;
	printf("%d\n",****qptr);
	printf("%d\n",a);
}