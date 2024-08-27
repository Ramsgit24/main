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
	void assign(int a,int b)
	{
		cout<<"from A assign"<<endl;
		x=a;
		y=b;
	}
	void display()
	{
		cout<<"from A display"<<endl;
		cout<<x<<" "<<y<<endl;
	}
};

class B :public A
{
	int p;
	int q;
public:
	B()
	{
		p=30;
		q=40;
	}
	void assign(int a,int b)
	{
		cout<<"from B assign"<<endl;
		p=a;
		q=b;
	}
	void display()
	{
		cout<<"from B display"<<endl;
		cout<<p<<" "<<q<<endl;
	}
	void check()
	{
		cout<<"from B check"<<endl;
	}
};
class C : public B
{
	int r;
	int s;
public:
	C()
	{
		r=30;
		s=40;
	}
	void assign(int a,int b)
	{
		cout<<"from C assign"<<endl;
		r=a;
		s=b;
	}
	void display()
	{
		cout<<"from C display"<<endl;
		cout<<r<<" "<<s<<endl;
	}
	void check()
	{
		cout<<"from C check"<<endl;
	}
};

int main()
{
	A obj1;
	B obj2;
	C obj3;
	A* pobj1=&obj1; // we cant give here obj2 and obj3 because there are derived class address
	B* pobj2=&obj2;
	C* pobj3=&obj3;
	pobj1->assign(1,2);
	pobj1->display();
	pobj2->assign(11,22);
	pobj2->display();
	pobj2->check();
	pobj3->assign(33,44);
	pobj3->display();
	pobj3->check();
}