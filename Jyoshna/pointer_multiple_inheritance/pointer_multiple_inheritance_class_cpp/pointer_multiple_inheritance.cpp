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
	void assign(int a,int b)
	{
		x=a;
		y=b;
		cout<<"A assign"<<endl;
	}
	void display()
	{
		cout<<"B assign"<<endl;
		cout<<x<<" "<<y<<endl;
	}
};
class B
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
		cout<<"B assign"<<endl;
	}
	void display()
	{
		cout<<"B assign"<<endl;
		cout<<p<<" "<<q<<endl;
	}
};
class C:public A,public B
{
public:
	int r;
	int s;
	C()
	{
		r=340;
		s=450;
	}
	void assign(int a,int b)
	{
		r=a;
		s=b;
		cout<<"C assign"<<endl;
	}
	void display()
	{
		cout<<"C assign"<<endl;
		cout<<r<<" "<<s<<endl;
	}
	void check()
	{
		x=11;
		y=44;
		p=55;
		q=66;
		r=22;
		s=33;
	}
};
int main()
{
	A obj1;
	B obj2;
	C obj3;
	A* pobj1=&obj3;
	B* pobj2=&obj3;
	C* pobj3=&obj3;
	pobj1->x=22;
	pobj1->y=33;
	pobj1->assign(23,34);
	pobj1->display();
	pobj2->p=666;
	pobj2->q=777;
	pobj2->display();
	pobj3->check();
    pobj3->assign(666,777);
	pobj3->x=111;
	pobj3->y=222;
	pobj3->p=333;
	pobj3->q=444;
	pobj3->r=555;
	pobj3->s=666;
	pobj3->display();
}