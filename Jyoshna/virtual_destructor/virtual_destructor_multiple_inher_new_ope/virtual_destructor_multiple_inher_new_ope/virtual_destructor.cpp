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
	~C()
	{
		cout<<"C destructor"<<endl;
	}
};
int main()
{
	A*obj1=new A;
	A*obj2=new C;
	B*obj3=new B;
	B*obj4=new C;
	C*obj5=new C;
	obj5->assign(11,22);
	obj5->display();
	delete(obj1);
	delete(obj2);
	delete(obj3);
	delete(obj4);
	delete(obj5);
}