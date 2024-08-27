#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	//virtual A();(virtual constr is not posible)
	virtual void assign(int a,int b)=0;//(pure virtual function)(not creat object in that class)
	void assign(int a,int b);
	void disp();
};
class B:virtual public A//(not define virtual fun in dirve class ,that dirve class also abstract class)
{
	int p;
	int q;
public:
	B();
	void assign(int a,int b);
	void disp();
};
A::A()
{
	x=10;
	y=20;
}
void A::assign(int a, int b)
{
	x=a;
	y=b;
}
void A::disp()
{
	cout<<x<<" "<<y<<endl;
}

B::B()
{
	p=30;
	q=40;
}
void B::assign(int a, int b)
{
	p=a;
	q=b;
}
void B::disp()
{
	cout<<p<<" "<<q<<endl;
}
int main()
{
	//(abstarct class is not creat object)
	//(at lest one pure virtual function iin class,that class is abstract class)
	B obj1;
	obj1.assign(11,22);
	obj1.disp();

}