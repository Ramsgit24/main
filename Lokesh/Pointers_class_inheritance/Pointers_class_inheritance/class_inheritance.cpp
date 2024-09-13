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
	int p;
	int q;
	int m;
	int n;
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
	}
	void display()
	{
		cout<<"B display"<<endl;
		cout<<p<<" "<<q<<endl;
	}
	void check()
	{
		m=12;
		n=32;
		cout<<"C con"<<endl;
		cout<<m<<" "<<n<<endl;
	}
};
int main()
{
	A obj1;
	B obj2;
	A* pobj1=&obj2;
	B* pobj2=&obj2;
	pobj2->assign(21,33);
	pobj2->display();
	pobj2->check();
}
