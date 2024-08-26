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
	void assign(int a,int b)
	{
		cout<<"A assign"<<endl;
		x=a;
		y=b;
	}
	void display()
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
		p=10;
		q=20;
	}
	void assign(int a,int b)
	{
		cout<<"B assign"<<endl;
		p=a;
		q=b;
	}
	void display()
	{
		cout<<"B display"<<endl;
		cout<<p<<" "<<q<<endl;
	}
};
class C:public B
{
	int m,n;
public:
	C()
	{
		m=110;
		n=220;
	}
	void assign(int a,int b)
	{
		cout<<"C assign"<<endl;
		m=a;
		n=b;
	}
	void display()
	{
		cout<<"C display"<<endl;
		cout<<m<<" "<<n<<endl;
	}
};
int main()
{
	A obj1;
	B obj2;
	C obj3;
	C*pobj3=&obj3;
	B*pobj4=&obj3;
	A*pobj5=&obj3;
	A*pobj1=&obj2;
	B*pobj2=&obj2;
	pobj1->display();
	pobj1->assign(50,60);
	pobj1->display();

	pobj2->display();
	pobj2->assign(70,80);
	pobj2->display();
	pobj2->A::assign(1,2);
	obj2.A::display();
	pobj5->assign(12,21);
	pobj5->display();

	pobj3->display();
	pobj4->display();

}