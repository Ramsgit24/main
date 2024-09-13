/*#include<iostream>
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
	}
	void display()
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
		cout<<p<<" "<<q<<endl;
	}
};
int main()
{
	B obj1;
	A*pobj1=&obj1;
	pobj1->assign(112,221);
	pobj1->display();
}
*/
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
	}
	void display()
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
		p=30;
		q=40;
	}
private:
	void assign(int a,int b)
	{
		p=a;
		q=b;
	}
	void display()
	{
		cout<<p<<" "<<q<<endl;
	}
};
int main()
{
	B obj1;
	A*pobj1=&obj1;
	pobj1->assign(112,221);
	pobj1->display();
}
