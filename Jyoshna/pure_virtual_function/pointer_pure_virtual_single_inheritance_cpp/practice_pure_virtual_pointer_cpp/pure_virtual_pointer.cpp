#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A();
	virtual void assign(int,int)=0;
	void display();
};
class B:public A
{
	int p,q;
public:
	B();
	void assign(int,int);
	void display();
};
A::A()
{
	x=10;
	y=20;
}
void A::assign(int a,int b)
{
	x=a;
	y=b;
	cout<<"A assign"<<endl;
}
void A::display()
{
	cout<<"A display"<<endl;
	cout<<x<<" "<<y<<endl;
}
B::B()
{
	p=30;
	q=40;
}
//void B::assign(int a,int b)
//{
//	p=a;
//	q=b;
//	cout<<"B assign"<<endl;(if we cannot define b assign means it will show error(unresolved externals)
//}
void B::assign(int a,int b)
{
	p=a;
	q=b;
	cout<<"B assign"<<endl;
}
void B::display()
{
	cout<<"A display"<<endl;
	cout<<p<<" "<<q<<endl;
}
int main()
{
	B obj;
	//obj.assign(23,45);
	A*pobj1=&obj;
	pobj1->assign(11,22);
	pobj1->display();
}