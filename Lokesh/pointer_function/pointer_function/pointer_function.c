//#include<stdio.h>
//void disp();
//int fun();
//void main()
//{
//	int f;
//	void (*funptr)()=disp;
//	int (*fun_ptr)()=fun;                   //POINTER WITH FUNCTIONS
//	(*funptr)();
//	f=(*fun_ptr)();
//}
//void disp()
//{
//	printf("hello\n");
//}
//int fun()
//{
//	int c;
//  c=printf("goodmorning\n");
//   return c;
//}
//
//













#include<stdio.h>
void fun();
int fun();
void main()
{
	int f;
	void (*funptr[2])()=disp;
	int (*fun_ptr[2])()=fun;
	(*funptr[2])();
	f=(*fun_ptr[2])();                    //POINTERS WITH ARRAY 
}
void disp()
{
	printf("hello\n");
}
int fun()
{
	int c;
  c=printf("goodmorning\n");

}
