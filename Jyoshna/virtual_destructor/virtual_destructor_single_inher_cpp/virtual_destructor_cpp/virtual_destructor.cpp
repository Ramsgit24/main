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
		cout<<"A destructor"<<endle;
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
int main()
{
	A*obj1=new A;
	A*obj2=new B;
	//B*obj3=new A;
	B*obj4=new B;
	obj4->assign(11,22);
	obj4->display();
	delete(obj1);
	delete(obj2);
	delete(obj4);
}

