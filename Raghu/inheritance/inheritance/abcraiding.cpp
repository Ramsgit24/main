#include<iostream>
using namespace std;
class A
{
public:
	int x;
	int y;

	A()
	{
	x=10;
	y=20;
	}
	void disp()
	{
		cout<<"A disp"<<endl;
		cout<<x<<" "<<y<<endl;
	}
	void assign(int a,int b)
	{
		x=a;
		y=b;
	}
};

class B:public A
{
public:
	int p;
	int q;

	B()
	{
	p=30;
	q=40;
	}
	
	void assign(int a,int b)
	{
		p=a;
		q=b;
	}
	void disp()
	{
		cout<<"B disp"<<endl;
		cout<<p<<" "<<q<<endl;
	}
};
class C:public B  
{
public:
	int c;
	int d;

	C()
	{
	c=30;
	d=40;
	}
	
	void assign(int a,int b)
	{
		c=a;
		d=b;
	}
	void disp()
	{
		cout<<"C disp"<<endl;
		cout<<c<<" "<<d<<endl;
	}
};
int main()
{
	A obj1;
	obj1.disp();
	obj1.assign(111,222);
	obj1.disp();
	B obj2;
	obj2.disp();
	obj2.assign(333,444);
	obj2.disp();
	cout<<obj2.x<<endl;
	cout<<obj2.y<<endl;
	
	
}

