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
	virtual void assign(int a,int b)
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

	A obj1;
	B obj2;

	A* pobj1=dynamic_cast<A*>(&obj2);

	B* pobj2=dynamic_cast<B*>(&obj1);

	
	if(pobj1==NULL)
	{
		cout<<"invalid"<<endl;
	}
	else
	{
	pobj1->assign(11,22);

	pobj1->disp();
	}
	if(pobj2==NULL)
	{
		cout<<"invalid"<<endl;
	}
	else
	{
	pobj2->assign(33,44);

	pobj2->disp();
	}
	
	
}