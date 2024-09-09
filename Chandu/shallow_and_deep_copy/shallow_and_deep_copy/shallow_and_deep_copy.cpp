/* if we dont go for deep copy and dangling pointer will create i.e., all objects will
pointed to the same memory location*/

#include<iostream>
using namespace std;

class A
{
	int x;
	int *ptr;
public:
	A()
	{
		x=10;
		ptr=&x;
	}
	void assign(int a,int b)
	{
		x=a;
		*ptr=b;
	}
	A(const A& tobj1)//deep copy
	{
		x=tobj1.x;
		ptr=&x;
	}
	void disp()
	{
		cout<<x<<" "<<ptr<<" "<<*ptr<<endl;
	}
};
int main()
{

	A obj1;

	A obj2=obj1;

	A obj3=obj2;

	obj1.disp();
	obj2.disp();
	obj3.disp();
}