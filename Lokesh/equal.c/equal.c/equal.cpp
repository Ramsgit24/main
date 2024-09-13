#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		x=22;
		y=33;
	}
	void Aassign(int a,int b)
	{
		x=a;
		y=b;
	}
	void Adisplay()
	{
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
		p=1;
		q=2;
	}
	void Bassign(int a,int b)
	{
		p=a;
		q=b;
	}
	void Bdisplay()
	{
		cout<<p<<" "<<q<<endl;
	}
};
class C:public B
{
	int m;
	int n;
public:
	C()
	{
		m=13;
		n=15;
	}
	void Cassign(int a,int b)
	{
		m=a;
		n=b;
	}
	void Cdisplay()
	{
		cout<<m<<" "<<n<<endl;
	}
};
int main()
{
	A A1;
	B B1;
	C C1;
	A1=B1;
	B1.Bdisplay();
	B1=C1;
	C1.Cdisplay();

}
