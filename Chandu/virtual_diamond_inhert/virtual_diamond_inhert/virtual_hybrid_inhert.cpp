#include<iostream>
using namespace std;

class A
{
	int x,y;
public:
	A()
	{
		cout<<"A constructor"<<endl;
		x=10;
		y=20;
	}
	virtual void assign(int a,int b)
	{
		cout<<"A assign"<<endl;
		x=a;
		y=b;
	}
	 void disp()
	{
		cout<<"A display"<<endl;
		cout<<x<<" "<<y<<endl;
	}

};
class B: virtual public A
{
	int p,q;
public:
	B()
	{
		cout<<"B constructor"<<endl;
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
		cout<<"B display"<<endl;
		cout<<p<<" "<<q<<endl;
	}

};

class C:virtual public A
{
	int r,s;
public:
	C()
	{
		cout<<"C constructor"<<endl;
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
		cout<<"C display"<<endl;
		cout<<r<<" "<<s<<endl;
	}

};

class D:public B,public C
{
	int i,j;
public:
	D()
	{
		cout<<"D constructor"<<endl;
		i=70;
		j=80;
	}
	 void assign(int a,int b)
	{
		cout<<"D assign"<<endl;
		i=a;
		j=b;
	}
	void disp()
	{
		cout<<"D display"<<endl;
		cout<<i<<" "<<j<<endl;
	}

};

class E
{
public:
	void virtual add()=0;
};
int main()
{
	D obj1;
	E obj2;
	A* pobj1=&obj1;
	pobj1->disp();
}