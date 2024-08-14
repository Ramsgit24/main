#include<iostream>
using namespace std;

template <typename T,typename P>
class A
{
	T x;
	P y;
public:
	A();
	T add(T a,P b);
	void assign(T a,P b);
	void disp();
	
};

template <typename R,typename S>
class B
{
	R p;
	S q;
public:
	B();
	S add(R a,S b);
	void assign(R a,S b);
	void disp();
	
};

#include"template.h"

template <typename T,typename P>
A<T,P>::A()
	{
		x=10;
		y=20;
	}
template <typename T,typename P>
T A<T,P>::add(T a,P b)
	{
		T c;
		x=a;
		y=b;

		c=a+b;
		return c;
		
	}
template <typename T,typename P>
void A<T,P>::assign(T a,P b)
	{
		x=a;
		y=b;
	}
template <typename T,typename P>
void A<T,P>:: disp()
	{
		cout<<x<<" "<<y<<endl;
	}

template <typename R,typename S>
B<R,S>::B()
	{
		p=30;
		q=40;
	}
template <typename R,typename S>
S B<R,S>::add(R a,S b)
	{
		S c;
		p=a;
		q=b;

		c=p+q;
		return c;
		
	}
template <typename R,typename S>
void B<R,S>::assign(R a,S b)
	{
		p=a;
		q=b;
	}
template <typename R,typename S>
void B<R,S>:: disp()
	{
		cout<<p<<" "<<q<<endl;
	}



int main()
{

	B<int,float> obj2;

	obj2.assign(11,22);

	float b=obj2.add(55,44.3f);

	obj2.disp();

	cout<<"additon of A class members is : "<<b<<endl;

	A<float,int> obj1;

	obj1.assign(111,222);

	float e=obj1.add(555.5f,444);

	obj1.disp();

	cout<<"additon of B class members is : "<<e<<endl;
}