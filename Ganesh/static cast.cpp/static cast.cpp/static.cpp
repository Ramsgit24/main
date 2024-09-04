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
	virtual void display()
	{
		cout<<x<<" "<<y<<endl;
	
	}

};
class B:public A
{
public:
	int p;
	int	q;
	B(){
		p=8;
		q=8;
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
	int a=10;
	char b='A';
	a=static_cast<int>(b);
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
    pobj1->assign(33,44);
	pobj1->display();
	}
	if(pobj2==NULL)
	{
		cout<<"invalied"<<endl;
	
	}
	else
	{
	pobj2->assign(44,77);
	pobj2->display();
	}
}



