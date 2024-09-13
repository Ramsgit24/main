#include<iostream>
using namespace std;
class A
{
	int x;
public:
	int y;
protected:
	int z;
public:
	A()
	{
		cout<<"A constructor"<<endl;
		x=10;
		y=20;
		z=30;
	}
	void Adisplay()
	{
		cout<<x<<" "<<y<<" "<<z<<endl;	
	}
	void Acheck()
	{
      x=10;
	  y=20;
	  z=30;
	  
	}

};
class B:private A
{
	int a;
public:
	int b;
protected:
	int c;
public:
	B()
	{
		a=40;
		b=50;
		c=60;
	}
	void Bdisplay()
	{
		cout<<a<<b<<c<<endl;
	}
	void Bcheck()
	{

		y=20;
		z=30;
		cout<<a<<b<<endl;
	}
};
int main()
{
	A obj1;
	B obj2;
	obj1.Adisplay();
	//obj2.Bdisplay();
	obj2.Bcheck();
	
	//obj2.Adisplay();
}













/*class C:private B
{
	int p;
public:
	int q;
protected:
	int r;
public:
	C();
	void Cdisplay();
	void Ccheck();
};*/