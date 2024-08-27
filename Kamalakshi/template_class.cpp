#include<iostream>
using namespace std;
template<typename p,typename q>
class A
{
	p a;
	p b;
public:
	A();
	p add(p x, q y);
	void assign(p x, q y);
	void display();
};
template<typename p,typename q>
A<p,q>::A()
	{
		a=10;
		b=20;
	}
template<typename p,typename q>
 p A<p,q>:: add(p x, q y)
{
 	    p c;
		a=x;
		b=y;
		c=x+y;
		return c;
}
template<typename p,typename q>
void A<p,q>::assign(p x, q y)
	{
		a=x;
		b=y;
	}
template<typename p,typename q>
void A<p,q>:: display()
	{
		cout<<a<<" "<<b<<endl;
	}
int main()
{
	A<int,int> obj;
	A<float,float> obj1;
	obj1.assign(11,22);
	float d=obj1.add(33,44);
	obj1.display();
	cout<<d<<endl;
}