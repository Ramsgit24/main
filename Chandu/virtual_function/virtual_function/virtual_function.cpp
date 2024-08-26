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
private:
	virtual void assign(int a,int b)
	{
		cout<<"B assign"<<endl;
		p=a;
		q=b;
	}
public:
	void disp()
	{
		cout<<"B display"<<endl;
		cout<<p<<" "<<q<<endl;
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
private:
	 void assign(int a,int b)
	{
		cout<<"C assign"<<endl;
		r=a;
		s=b;
	}
public:
	void disp()
	{
		cout<<"C display"<<endl;
		cout<<r<<" "<<s<<endl;
	}

};
int main()
{
	B obj1;
	C obj2;

	A* pobj1=&obj1;
	pobj1->assign(1,2);
	pobj1->disp();

	/*A* pobj2=&obj2;
	pobj2->assign(11,22);
	pobj2->disp();*/

	cout<<"Size of A class is "<<sizeof(A)<<endl;

	cout<<"Size of B class is "<<sizeof(B)<<endl;

	cout<<"Size of C class is "<<sizeof(C)<<endl;


}