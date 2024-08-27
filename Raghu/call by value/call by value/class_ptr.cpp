#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		x=10;
		y=20;
	}
	void assgin(int a,int b)
	{
		x=a;
		y=b;
	}
	void disp()
	{
		cout<<x<<" "<<y<<endl;
	}
};
class B:public A
{
	int p;
	int q;
public:
	B()
	{
		p=30;
		q=40;
	}
	void assgin(int a,int b)
	{
		p=a;
		q=b;
	}
	void disp()
	{
		cout<<p<<" "<<q<<endl;
	}
	void check()
	{
		cout<<"B check"<<endl;
	}
};
class C:public B
{
	int r;
	int s;
public:
	C()
	{
		r=50;
		s=60;
	}
	void assgin(int a,int b)
	{
		r=a;
		s=b;
	}
	void disp()
	{
		cout<<r<<" "<<s<<endl;
	}
	void check()
	{
		cout<<"C check"<<endl;
	}
};
int main()
{
	A obj1;
	B obj2;
	C obj3;

	A* pobj1=&obj2;
	pobj1->disp();
	B* pobj2=&obj2;
	pobj2->disp();
	C* pobj3=&obj3;
	pobj3->disp();

	pobj1->assgin(11,22);
	pobj1->disp();
	pobj2->assgin(33,44);
	pobj2->disp();
	pobj2->check();

	pobj2->A::assgin(55,66);
	pobj2->A::disp();
	
}