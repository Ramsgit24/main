#include<iostream>
using namespace std;
class B;
class A
{
	int x;
	int y;
public:
	void Assign(int a,int b);
	void display();
	void show();
	friend void B::check();
};
class B
{
	int p;
	int q;
public:
	void Assign(int a,int b);
	void display();
	void check();
	friend void A::show();
};
void A::Assign(int a,int b)
	{
		x=a;
		y=b;
	}
void A::display()
	{
		cout<<x<<" "<<y<<endl;
	}
void A::show()
	{
     B obj1;
	 obj1.p=10;
	 obj1.q=20;
	}
void B::Assign(int a,int b)
	{
		p=a;
		q=b;
	}
void B::display()
	{
		cout<<p<<" "<<q<<endl;
	}
void B::check()
	{
     A obj1;
	 obj1.x=10;
	 obj1.y=20;
	}
int main()
{
	A obj1;
	B obj2;
	obj1.show();
	obj2.check();
}

