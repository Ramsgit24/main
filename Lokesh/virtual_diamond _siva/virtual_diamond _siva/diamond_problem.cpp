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
class B:virtual public A
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

class C:virtual public A
{
	int j;
	int k;
public:
	C()
	{
		j=50;
		k=60;
	}
	void assign(int a,int b)
	{
		cout<<"C assign"<<endl;
		j=a;
		k=b;
	}
	void display()
	{
		cout<<"C display"<<endl;
		cout<<j<<" "<<k<<endl;
	}

};
class D: public B,public C
{
	int m;
	int n;
public:
	D()
	{
		m=10;
		n=20;
	}
	void assign(int a,int b)
	{
		cout<<"D assign"<<endl;
		m=a;
		n=b;
	}
	void display()
	{
		cout<<"D display"<<endl;
		cout<<m<<" "<<n<<endl;
	}

};

int main()
{
	A obj1;
	B obj2;
	D obj3;
	A* pobj1=&obj1;
	//pobj1->assign(11,22);
    pobj1->display();



}

