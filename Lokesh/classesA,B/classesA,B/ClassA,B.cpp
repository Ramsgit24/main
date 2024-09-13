#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
	int z;
public:
	void assign(int a,int b,int c);
	void display();
	void show();
};
class B
{
	int p;
	int q;
	int r;
public:
	void assign(int d,int e,int f);
	void display();
	friend class A;
};
void A::assign(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void A::display()
{
	cout<<x<<" "<<y<<" "<<z<<endl;
}
void B::assign(int d,int e,int f)
{
	p=d;
	q=e;
	r=f;
}
void B::display()
{
	cout<<p<<" "<<q<<" "<<r<<endl;
}
void A::show()
{
	B obj;
	obj.assign(12,23,34);
	obj.display();
}
int main()
{
	A bb;
	bb.show();
}
