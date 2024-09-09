/* constant pointer */
#include<stdio.h>

int main()
{
	int x=10;
	int y=20;

	

	int *const ptr=&x;
	*ptr=30;//indirection operator is not const here 
	//ptr++;//pointer is const so it is not going to be modify
	//ptr=&y;
	

	/*const int *ptr=&x;//int const*ptr=&x both statements are same only
	
	//*ptr=30;//here indirection operator is const
	ptr++;//ptr is not a const here
	ptr=&y;*/

	/* here both indirection operator and ptr is const
		so both are not going to modify
	const int *const ptr=&x;
	ptr++;
	ptr=&y;
	*ptr=30;*/

}