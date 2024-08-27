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
    /*virtual*/ void display()
	{
		cout<<"A display"<<endl;
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
 //   void assign(int a,int b)//it will not check the access specifiers in runtime
	//{
	//	p=a;
	//	q=b;
	//	cout<<"B assign"<<endl;
	//}
	void display()
	{
		cout<<"B display"<<endl;
		cout<<p<<" "<<q<<endl;
	}
};
int main()
{
	A obj1;
	B obj2;
	A*pobj1=&obj2;
	pobj1->display();
	cout<<sizeof(A)<<endl;
}