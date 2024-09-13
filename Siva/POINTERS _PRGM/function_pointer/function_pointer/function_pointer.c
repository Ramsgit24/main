//#include<stdio.h>   //non return type function
//void disp();
//void main()
//{
//	void(*fun_ptr)();   //declaration of function;
//	fun_ptr=disp;
//	//disp();
//	(*fun_ptr)();   //calling fun_ptr;
//}
//void disp()
//{
//	printf("HELLO \n");
//}

//#include<stdio.h>    // return type function; 
//int fun(int);
//int main()
//{
//	int y ,z;
//	int x=10;
//	int(*fun_ptr)(int)=fun;
//	z=fun(x);               //normal calling;
//	y=(*fun_ptr)(50);      //calling fun through pointer;
//	printf("%d\n",y);
//	printf("%d\n",z);
//}
//int fun(int a)
//{
//	int b=10;
//	b=b*a;
//	return b;
//}

//ARRAY OF FUNCTION POINTERS
#include<stdio.h>
void disp();
void fun();
void main()
{
	//void(*fun_ptr[2])();
	
	//fun_ptr[0]=disp;
	//fun_ptr[1]=fun;
	void(*fun_ptr[2])()={disp,fun};
	
	(*fun_ptr[0])();
	(*fun_ptr[1])();
}

void disp()
{
	printf("HELLO ");
}
void fun()
{
	printf("WORLD\n");
}