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
class B
{

	int p,q;
public:

	B();
	//void assign(int,int);(it will display b class properties only)
	virtual void assign(int,int)=0;
	void display();
};
class C:public A,public B
{

	int r,s;
public:
	C();
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
void B::assign(int a,int b)
{
	p=a;
	q=b;
	cout<<"B assign"<<endl;
}
void B::display()
{
	cout<<"B display"<<endl;
	cout<<p<<" "<<q<<endl;
}
C::C()
{
	r=50;
	s=60;
}
void C::assign(int a,int b)
{
	r=a;
	s=b;
	cout<<"C assign"<<endl;
}
void C::display()
{
	cout<<"C display"<<endl;
	cout<<r<<" "<<s<<endl;
}
int main()
{
	C obj1;
	A*pobj1=&obj1;
	B*pobj2=&obj1;
	C*pobj3=&obj1;
	pobj1->assign(22,33);
	pobj1->display();
	pobj2->assign(11,22);
	pobj2->display();
	pobj3->assign(44,55);
	pobj3->display();

}