#
include<iostream>
using namespace std;
class A
{
	int a,b;
public:
	virtual A()//it is not possible as it skip the memory creation of particular class.
	{
		cout<<"A constructer"<<endl;
		a=10;
		b=20;
	}
	virtual void assign(int x,int y)
	{
		cout<<"A assign"<<endl;
		a=x;
		b=y;
	}
	virtual void display()
	{
		cout<<"A display"<<endl;
		cout<<a<<" "<<b<<endl;
	}
};
class B:virtual public A
{
	int c,d;
public:
	B()
	{
		cout<<"B constructer"<<endl;
		c=10;
		d=20;
	}
	void assign(int x,int y)
	{
		cout<<"B assign"<<endl;
		c=x;
		d=y;
	}
	void display()
	{
		cout<<"B display"<<endl;
		cout<<c<<" "<<d<<endl;
	}
};
int main()
{
	
}