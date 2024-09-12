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
		cout<<"A constructor"<<endl;
	}
	void assign(int a,int b)
	{
		x=a;
		y=b;
		cout<<"A assign"<<endl;
	}
	void display()
	{
		cout<<"A display"<<endl;
		cout<<x<<" "<<y<<endl;
	}
	virtual ~A()
	{
		cout<<"A destructor"<<endl;
	}
};
class B
{
	int p;
	int q;
public:
	B()
	{
		p=30;
		q=40;
		cout<<"B constructor"<<endl;
	}
	void assign(int a,int b)
	{
		p=a;
		q=b;
		cout<<"B assign"<<endl;
	}
	void display()
	{
		cout<<"B display"<<endl;
		cout<<p<<" "<<q<<endl;
	}
	virtual ~B()
	{
		cout<<"B destructor"<<endl;
	}
};
class C:public A,public B
{
	int r;
	int s;
public:
	C()
	{
		r=10;
		s=20;
		cout<<"C constructor"<<endl;
	}
	void assign(int a,int b)
	{
		r=a;
		s=b;
		cout<<"C assign"<<endl;
	}
	void display()
	{
		cout<<"C display"<<endl;
		cout<<r<<" "<<s<<endl;
	}
	virtual ~C()
	{
		cout<<"C destructor"<<endl;
	}
};
class D:public C
{
	int m;
	int n;
public:
	D()
	{
		m=10;
		n=20;
		cout<<"D constructor"<<endl;
	}
	void assign(int a,int b)
	{
		m=a;
		n=b;
		cout<<"D assign"<<endl;
	}
	void display()
	{
		cout<<"D display"<<endl;
		cout<<m<<" "<<n<<endl;
	}
	virtual ~D()
	{
		cout<<"D destructor"<<endl;
	}
};

int main()
{
	A*obj1=new A;
	A*obj2=new C;
	A*obj7=new D;
	B*obj3=new B;
	B*obj4=new C;
	B*obj8=new D;
	C*obj5=new C;
	C*obj6=new D;
	D*obj9=new D;
	obj9->assign(11,22);
	obj9->display();
	delete(obj1);
	delete(obj2);
	delete(obj3);
	delete(obj4);
	delete(obj5);
	delete(obj6);
	delete(obj7);
	delete(obj8);
	delete(obj9);
}