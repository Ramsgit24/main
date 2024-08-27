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
//private:
virtual	void assign(int a,int b)
	{
		cout<<"A assign"<<endl;
		x=a;
		y=b;
	}
public:
	void display()
	{
		cout<<"A display"<<endl;
		cout<<x<<" "<<y<<endl;
	}
};
class B :public A
{
	int p;
	int q;
public:
	B()
	{
		p=30;
		q=40;
	}
private: // we can access private members because it will not check in the runtime
	void assign(int a,int b)
	{
		cout<<"B assign"<<endl;
		p=a;
		q=b;
	}
public:
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
	A* pobj1=&obj2;
	pobj1->assign(11,22);
	pobj1->display();
	cout<<sizeof(A)<<endl;
}