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
	A(const A&tobj1)
	{
		x=tobj1.x;
		ptr=&x;
	}
	void assign(int a,int b)
	{
		x=a;
		*ptr=b;
	}
	void display()
	{
		cout<<x<<ptr<<*ptr<<endl;
	}
};
int main()
{
	A obj1;
	A obj2=obj1;
	obj1.display();
	obj2.display();
	obj1=obj2;
}

