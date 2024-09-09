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
		x=a;
		y=b;
	}
	void disp()
	{
		cout<<x<<" "<<y<<endl;
	}
	 
};
class B:public A
{
	int p,q;
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
	void disp()
	{
		cout<<p<<" "<<q<<endl;
	}
	 
};

int main()
{
	int a=30;
	char b='c';
	a=static_cast<int>(b);

	A obj1;
	B obj2;

	A* pobj1=static_cast<A*>(&obj2);

	B* pobj2=static_cast<B*>(&obj1);

	
	
	pobj1->assign(11,22);

	pobj1->disp();
	

	
	
	pobj2->assign(11,22);

	pobj2->disp();
	
}