/* const pointers with strings */
#include<stdio.h>

int main()
{
	char *str="hello";
	//*str='A';// compile time no error but run time it will throw error why because it is going
			// to store in r data in data segment so it is not going to be modify

	/* const char *str1="chandu";
	//*str='C';// compile time error why because here * is const
	str1++;// it is allowed */

	 char *const str1="chandu";
	*str1='A';// compile time no error
	//str1++;// here str1 is const 

	/* const char *const str1="chandu";
	*str1='A';// * is const
	str1++;//str1 is const*/









}