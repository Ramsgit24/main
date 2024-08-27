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
	void display()
	{
		cout<<"A display"<<endl;
		cout<<x<<" "<<y<<endl;
	}
};
class B:public A
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
		p=a;
		q=b;
		cout<<"B assign"<<endl;
	}
	void display()
	{
		cout<<"B display"<<endl;
		cout<<p<<" "<<q<<endl;
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
	}
	void assign(int a,int b)//it will not check the access specifiers in runtime
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
	A*pobj4=&obj2;
	//A*pobj1=&obj2;//(same class multiple virtual functions will not excuted(error:redefinition multiple initilization)
	B*pobj2=&obj3;
	C*pobj3=&obj3;
	pobj1->assign(11,22);
	pobj1->display();
	pobj4->assign(66,77);
	pobj4->display();
	pobj2->assign(22,33);
	pobj2->display();
	pobj3->assign(44,55);
	pobj3->display();
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;
	cout<<sizeof(C)<<endl;
}