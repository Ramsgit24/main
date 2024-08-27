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
	/*virtual void display()*/
	void display()
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
class C
{
	int r;
	int s;
public:
	C()
	{
		r=50;
		s=60;
	}
	virtual void assign(int a,int b)
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
class D:public A,public B,public C
{
	int i;
	int j;
public:
	D()
	{
		i=70;
		j=80;
	}
	void assign(int a,int b)
	{
		i=a;
		j=b;
		cout<<"D assign"<<endl;
	}
	void display()
	{
		cout<<"D display"<<endl;
		cout<<i<<" "<<j<<endl;
	}
};
int main()
{
	A obj1;
	B obj2;
	C obj3;
	D obj4;
	A*pobj1=&obj4;
	B*pobj2=&obj4;
	C*pobj3=&obj4;
	D*pobj4=&obj4;
	pobj1->assign(11,22);
	pobj1->display();
	pobj2->assign(33,44);
	pobj2->display();
	pobj3->assign(55,66);
	pobj3->display();
	pobj4->assign(77,88);
	pobj4->display();
	cout<<sizeof(A)<<endl;//12

	cout<<sizeof(B)<<endl;//12

	cout<<sizeof(C)<<endl;//12

	cout<<sizeof(D)<<endl;//44

}