#include<stdio.h>

int main()
{
	int x=10;
	char c='y';
	float f=99.9f;
	void *ptr=&x;
	
	printf("%d\n",*(int*)ptr);
	ptr=&c;
	printf("%c\n",*(char*)ptr);
	ptr=&f;
	printf("%f\n",*(float*)ptr);
	/*ptr++; compile time error we cant perform arithmatic operations on void pointer
	why because compier doesnot know how much to increase or which data to increase */

}