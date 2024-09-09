#include<iostream>
using namespace std;

class A
{
	public:
	int x,y;

	A()
	{
		x=10;
		y=20;
	}
	void assign(int a,int b)
	{
		cout<<"A assign"<<endl;
		x=a;
		y=b;
	}

	void disp()
	{
		cout<<"A disp"<<endl;
		cout<<x<<" "<<y<<endl;
	}
};

class B:public A
{
	public:
	int p,q;

	B()
	{
		p=30;
		q=40;
	}
	void assign(int a,int b)
	{
		cout<<"B assign"<<endl;
		p=a;
		q=b;
	}

	void disp()
	{
		cout<<"B disp"<<endl;
		cout<<p<<" "<<q<<endl;
	}
	void check()
	{
		cout<<"B check"<<endl;
	}

};

class C:public B
{
	int r,s;
public:
	C()
	{
		r=50;
		s=60;
	}
	void assign(int a,int b)
	{
		cout<<"C assign"<<endl;
		r=a;
		s=b;
	}

	void disp()
	{
		cout<<"C disp"<<endl;
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

	A* pobj1=&obj3;
	B* pobj2=&obj2;
	C* pobj3=&obj3;
	A* pobj4=pobj1;


	pobj1->assign(11,22);
	pobj1->disp();
	pobj2->check();
	pobj4->assign(444,555);
	pobj4->disp();


	pobj3->x=10;
	pobj1->disp();
}