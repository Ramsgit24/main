#include<iostream>
using namespace std;
class A                   //if A class contains one virtual function its consider a ABSTRACT class..
{
	int x,y;
public:
	A()
	{
		x=10;
		y=20;
	}
	virtual void Aassign(int a,int b)=0;    //pure virtual function
	void display()
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
	void Aassign(int a,int b)
	{
		p=a;
		q=b;
	}
	void Bassign(int a,int b)
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
	//A obj1;                A class will not created object;why means A class is a ABSTRACT class
	B obj1;
	obj1.display();

}
