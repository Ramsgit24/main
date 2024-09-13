#include<iostream>
using namespace std;
class A
{
public:
	int x;
	int y;
	A()
	{
		cout<<"A value"<<endl;
		x=10;
		y=20;
	}
	void Adisplay()
	{
		cout<<x<<" "<<y<<endl;
	}
};
class B:public A
{
public:
	int p;
	int q;
	B()
	{
		cout<<"b value"<<endl;
		p=100;
		q=200;
	}
	void Bdisplay()
	{
		cout<<p<<" "<<q<<endl;
	}
void check()
{
	x=300;
	y=400;
}
};
int main()
{
	B obj1;
	obj1.Adisplay();
	obj1.Bdisplay();
	obj1.check();
	obj1.Adisplay();
	obj1.Bdisplay();
}
