#include<iostream>
using namespace std;
class A
{
	int x,y;
public:
	class B
	{
		int p,q;
	public:
		B();
		void assign(int a,int b);
		void display();
	};
	A();
	void assign(int a,int b);
	void display();
};
int main()
{
	A::B obj1;
	obj1.assign(111,222);
	obj1.display();
	A obj2;
	obj2.assign(333,444);
	obj2.display();
}
A::A()
{
	x=10;
	y=20;
}
void A::assign(int a,int b)
{
	x=a;
	y=b;
}
void A::display()
{
	B obj1;
	obj1.assign(1,2);
	//cout<<obj1.p<<" "<<obj1.q<<endl; //	as p and q are private members of class B.
	cout<<x<<" "<<y<<endl;		//we cannot access its private members after class is completed.
}
A::B::B()
{
	p=30;
	q=40;
}
void A::B::assign(int a,int b)
{
	p=a;
	q=b;

}
void A::B::display()
{
	A  obj1;
	cout<<obj1.x<<" "<<obj1.y<<endl; //class B is part of class A.
	p=obj1.x+obj1.y;				// so we can access its private members by creating object.
	q=max(obj1.x,obj1.y);
	cout<<p<<" "<<q<<endl;
}