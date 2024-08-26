#include<iostream>
using namespace std;

class A
{
	int x,y;
public:
	A()
	{
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
class B:public A
{
	int p,q;
public:
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
		cout<<"B display"<<endl;
		cout<<p<<" "<<q<<endl;
	}

};

class C:public A
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
		cout<<"C display"<<endl;
		cout<<r<<" "<<s<<endl;
	}

};

class D:public A
{
	int i,j;
public:
	D()
	{
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
class E:public B,public C,public D
{
	int m,n;
public:
	E()
	{
		m=90;
		n=100;
	}
	 void assign(int a,int b)
	{
		cout<<"E assign"<<endl;
		m=a;
		n=b;
	}
	void disp()
	{
		cout<<"E display"<<endl;
		cout<<m<<" "<<n<<endl;
	}

};
int main()
{
	A obj1;
	B obj2;
	C obj3;
	D obj4;
	E obj5;

	A* pobj1=&obj2;
	D* pobj2=&obj5;
	

	pobj1->assign(11,22);
	pobj1->disp();

	pobj2->assign(33,44);
	pobj2->disp();
}