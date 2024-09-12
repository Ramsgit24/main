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
		cout<<"A const"<<endl;
	}
	void assign(int a,int b)
	{
		cout<<"A assign"<<endl;
		x=a;
		y=b;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
		cout<<"A display"<<endl;
	}
	virtual ~A()
	{
		cout<<"A destructor"<<endl;
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
		cout<<"B cons"<<endl;
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
	~B()
	{
		cout<<"B destructor"<<endl;
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
		cout<<"C constructor"<<endl;
	}
	void assign(int a,int b)
	{
		cout<<"C assign"<<endl;
		r=a;
		s=b;
	}
	void display()
	{
		cout<<"C display"<<endl;
		cout<<r<<" "<<s<<endl;
	}
	~C()
	{
		cout<<"C destructor"<<endl;
	}
};
int main()
{
	A*obj1=new A;
	A*obj2=new B;
	A*obj3=new C;
	//B*obj3=new A;
	B*obj4=new B;
	B*obj5=new C;
	C*obj6=new C;
	obj6->assign(11,22);
	obj6->display();
	delete obj1;
	delete obj2;
	delete obj3;
	delete obj4;
	delete obj5;
	delete obj6;
}

