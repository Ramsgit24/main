#include<stdlib.h>
#include<stdio.h>

void fun();
int main()
{

   fun(); 
   fun();
    return 0;
}
void fun()
{
	int ptr = (int*)malloc(3*sizeof(int));

	if(ptr!=NULL)
	{
		*ptr = 3000;
		*(ptr+1) = 4000;
		*(ptr+2) = 5000;

		printf("%d %d %d\n",ptr,*(ptr+1),*(ptr+2));

		free(ptr);
	}
}