#include<iostream>
using namespace std;

class A
{
	int x,y;
public:
	//virtual A(); virtual constructor creation is not possible
	A();
	void virtual assign(int,int)=0;
	//void assign(int,int);
	void disp();
};
class B:public A
{
	int p,q;
public:
	B();
	void assign(int,int);
	void disp();
};
A::A()
{
	x=10;
	y=20;
}
//void A::assign(int a, int b)
//{
//	cout<<"A assign"<<endl;
//	x=a;
//	y=b;
//
//}

void A::disp()
{
	cout<<"A display"<<endl;
	cout<<x<<" "<<y<<endl;
}

B::B()
{
	p=30;
	q=40;
}
void B::assign(int a, int b)
{
	cout<<"B assign"<<endl;
	p=a;
	q=b;

}
void B::disp()
{
	cout<<"B display"<<endl;
	cout<<p<<" "<<q<<endl;
}

int main()
{
	//A obj1; cannot create an object for abstract class
	//Abstract class is nothing but having atleast one pure virtual function
	B obj2;
	obj2.assign(11,22);
	obj2.disp();
}