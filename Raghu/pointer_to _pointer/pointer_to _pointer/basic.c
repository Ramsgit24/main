#include<stdio.h>
int main()
{
	int x=10;
	int *ptr=&x;
	int **dptr=&ptr;
	int ***tptr=&dptr;
	int ****qptr=&tptr;
	int *****fptr=&qptr;

	printf("1 pointer\n");
	printf("%d\n",ptr);
	printf("%d\n",&ptr);
	printf("%d\n",*ptr);
	
	printf("2 pointer\n");
	printf("%d\n",dptr);
	printf("%d\n",&dptr);
	printf("%d\n",*dptr);
	printf("%d\n",**dptr);
	
	printf("3 pointer\n");
	printf("%d\n",tptr);
	printf("%d\n",&tptr);
	printf("%d\n",*tptr);
	printf("%d\n",**tptr);
	printf("%d\n",***tptr);

	printf("4 pointer\n");
	printf("%d\n",qptr);
	printf("%d\n",&qptr);
	printf("%d\n",*qptr);
	printf("%d\n",**qptr);
	printf("%d\n",***qptr);
	printf("%d\n",****qptr);

	printf("5 pointer\n");
	printf("%d\n",fptr);
	printf("%d\n",&fptr);
	printf("%d\n",*fptr);
	printf("%d\n",**fptr);
	printf("%d\n",***fptr);
	printf("%d\n",****fptr);
	printf("%d\n",*****fptr);



}