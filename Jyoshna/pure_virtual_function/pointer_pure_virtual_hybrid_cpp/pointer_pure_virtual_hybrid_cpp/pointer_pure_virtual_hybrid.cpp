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
	virtual void assign(int,int)=0;
	void display();
};
class C 
{

	int r,s;
public:
	C();
	virtual void assign(int,int)=0;
	void display();
};
class D:public A,public B,public C
{
	int m;
	int n;
public:
	D();
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
D::D()
{
	m=70;
	n=80;
}
void D::assign(int a, int b)
{
	m=a;
	n=b;
	cout<<"D assign"<<endl;
}
void D::display()
{
	cout<<"D display"<<endl;
	cout<<m<<" "<<n<<endl;
}
int main()
{
	D obj1;
	A*pobj1=&obj1;
	B*pobj2=&obj1;
	C*pobj3=&obj1;
	D*pobj4=&obj1;
	pobj1->assign(11,22);
	pobj1->display();
	pobj2->assign(33,44);
	pobj2->display();
	pobj3->assign(55,66);
	pobj3->display();
	pobj4->assign(77,88);
	pobj4->display();
}