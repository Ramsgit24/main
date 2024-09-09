#include<stdio.h>

int main()
{
	int x=10;
	int *ptr=&x;
	int **dptr=&ptr;
	int ***tptr=&dptr;
	int ****qptr=&tptr;
	int *****fptr=&qptr;

	printf("******* Single Pointer ********\n");
	printf("Address of x:%p\n",&x);
	printf("value of ptr:%p\n",ptr);
	printf("Address of single pointer:%p\n",&ptr);
	printf("value of x through single ptr:%d\n\n",*ptr);

	printf("******* double Pointer ********\n");
	printf("value of single pointer  through double pointer:%p\n",*dptr);
	printf("Address of single ptr:%p\n",&ptr);
	printf("value of double ptr:%p\n",dptr);
	printf("Address of double pointer:%p\n",&dptr);
	printf("value of x through double ptr:%d\n\n",**dptr);

	printf("******* triple Pointer ********\n");
	printf("value of single pointer through triple pointer:%p\n",**tptr);
	printf("value of double pointer through triple pointer:%p\n",*tptr);
	printf("Address of double ptr:%p\n",&dptr);
	printf("value of triple ptr:%p\n",tptr);
	printf("Address of triple pointer:%p\n",&tptr);
	printf("value of x through triple ptr:%d\n",***tptr);
	




}