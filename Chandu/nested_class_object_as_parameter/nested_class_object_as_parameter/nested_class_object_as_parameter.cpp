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
	class B
	{
	public:
		int p,q;
		B()
		{
			p=30;
			q=40;
		}
		A fun(A t)
		{
			t.x=111;
			t.y=222;
			return t;
		}
		void display()
		{
			cout<<p<<" "<<q<<endl;
		}
	};

	B fun2(B b)
	{
		b.p=888;
		b.q=999;
		return b;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}

	A check(A c)
	{
		c.x=1;
		c.y=2;
		return c;
	}

};

int main()
{
	A::B obj2;
	A obj1;

	A::B obj3=obj1.fun2(obj2);
	obj3.display();

	A obj4=obj2.fun(obj1);
	obj4.display();

	A obj5=obj1.check(obj4);
	obj5.display();
}