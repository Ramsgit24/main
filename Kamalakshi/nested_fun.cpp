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
		A fun(A pobj1)
		{
			pobj1.x=111;
			pobj1.y=222;
			return pobj1;
		}
		void display()
		{
			cout<<p<<" "<<q<<endl;
		}
	};

	B fun2(B pobj2)
	{
		pobj2.p=888;
		pobj2.q=777;
		return pobj2;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	A obj1;
	A::B obj2;
	A::B obj3=obj1.fun2(obj2);
	obj3.display();
	A obj4=obj2.fun(obj1);
	obj4.display();
}