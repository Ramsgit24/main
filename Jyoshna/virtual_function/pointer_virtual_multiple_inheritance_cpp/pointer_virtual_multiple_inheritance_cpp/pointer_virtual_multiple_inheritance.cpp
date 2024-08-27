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
	virtual void assign(int a,int b)
	{
		x=a;
		y=b;
		cout<<"A assign"<<endl;
	}
	virtual void display()
	/*void display()*/
	{
		cout<<"A display"<<endl;
		cout<<x<<" "<<y<<endl;
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
	}
	virtual void assign(int a,int b)
	{
		p=a;
		q=b;
		cout<<"B assign"<<endl;
	}
	/*virtual void display()*/
    void display()
	{
		cout<<"B display"<<endl;
		cout<<p<<" "<<q<<endl;
	}
};
class C:public A,public B
{
	int r;
	int s;
public:
	C()
	{
		r=50;
		s=60;
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
};
int main()
{
	A obj1;
	B obj2;
	C obj3;
	A*pobj1=&obj3;
	B*pobj2=&obj3;
	C*pobj3=&obj3;
	pobj1->assign(11,22);
	pobj1->display();
	pobj2->assign(33,44);
	pobj2->display();
	pobj3->assign(55,66);
	pobj3->display();

	cout<<sizeof(A)<<endl;//12

	cout<<sizeof(B)<<endl;//12

	cout<<sizeof(C)<<endl;//32


}