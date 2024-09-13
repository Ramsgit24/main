
#include <stdio.h>
int main()
{
	int x = 10;

	int *ptr = &x;

	int **dptr = &ptr;

	int ***tptr = &dptr;

	int ****qptr = &tptr;

	int *****fptr = &qptr;

	int ******sptr= &fptr;

	printf("Single Pointer\n");
	printf("%d\n",ptr);
	printf("%d\n",&ptr);
	printf("%d\n",*ptr);

	printf("Double Pointer\n");
	printf("%d\n",dptr);
	printf("%d\n",&dptr);
	printf("%d\n",*dptr);
	printf("%d\n",**dptr);

	/*printf("Triple Pointer\n");
	printf("%d\n",tptr);
	printf("%d\n",&tptr);
	printf("%d\n",*tptr);
	printf("%d\n",**tptr);
	printf("%d\n",*tptr);
	
    printf("Quad Pointer\n");
	printf("%d\n",qptr);
	printf("%d\n",&qptr);
	printf("%d\n",*qptr);
	printf("%d\n",**qptr);
	printf("%d\n",*qptr);
	printf("%d\n",**qptr);

	printf("five Pointer\n");
	printf("%d\n",fptr);
	printf("%d\n",&fptr);
	printf("%d\n",*fptr);
	printf("%d\n",**fptr);
	printf("%d\n",*fptr);
	printf("%d\n",**fptr);
	printf("%d\n",*fptr);
	printf("%d\n",sizeof(fptr));

	printf("six Pointer\n");
	printf("%d\n",sptr);
	printf("%d\n",&sptr);
	printf("%d\n",*sptr);
	printf("%d\n",**sptr);
	printf("%d\n",*sptr);
	printf("%d\n",**sptr);
	printf("%d\n",*sptr);
	printf("%d\n",**sptr);
	printf("%d\n",sizeof(sptr));
	int sum=sizeof(sptr)+sizeof(fptr);
	printf("%d\n",sum);*/

	

    return 0;
}