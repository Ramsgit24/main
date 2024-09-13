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
	void Aassign(int a,int b)
	{
		x=a;
		y=b;
	}
	void Adisplay()
	{
		cout<<x<<" "<<y<<endl;
	}
};
class B:virtual public A
{
	int p,q;
public:
	B()
	{
		cout<<"B constructor"<<endl;
		p=30;
     	q=40;
	}
	void Bassign(int a,int b)
	{
		p=a;
		q=b;
	}
	void Bdisplay()
	{
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
		r=70;
		s=80;
	}
	void Cassign(int a,int b)
	{
		r=a;
		s=b;
	}
	void Cdisplay()
	{
		cout<<r<<" "<<s<<endl;
	}
};
class D:public B,public C
{
	int m,n;
public:
	D()
	{
		cout<<"D constructor"<<endl;
		m=50;
		n=60;
	}
	void Dassign(int a,int b)
	{
		m=a;
		n=b;
	}
	void Display()
	{
		cout<<m<<" "<<n<<endl;
	}
};
int main()
{
	D obj;
	obj.Aassign(222,444);
	obj.Adisplay();
	B obj1;
	obj1.Bassign(11,1111);
	obj1.Bdisplay();
}