#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	//A();
	A(int);
	A(int,int);
	void assign(int,int);
	void display();
	~A();
};
class B:public A
{
	int p;
	int q;
public:
	//B();
	B(int);
	B(int,int);
	void assign(int,int);
	void display();
	~B();
};
class C:public B
{
	int A1;
	int B1;
public:
	C();
	C(int);
	C(int,int);
	void assign(int,int);
	void display();
	~C();
};
A::A(int a)
{
	x=a;
	y=a;
}
A::A(int a,int b)
{
	x=a;
	y=b;
}
void A::assign(int a,int b)
{
    x=a;
	y=b;
}
void A::display()
{
	cout<<x<<" "<<y<<endl;
}
A::~A()
{
	cout<<"A distructor"<<endl;
}
B::B(int a):A(10)
{
	p=a;
	q=a;
}
B::B(int a,int b):A(339,444)
{
	p=a;
	q=b;
}
void B::assign(int a,int b)
{
	p=a;
	q=b;
}
void B::display()
{
	cout<<p<<" "<<q<<endl;
}
B::~B()
{
	cout<<"B distructor"<<endl;
}
C::C(int a):B(20)
{
	A1=a;
	B1=a;
}
C::C(int a,int b):B(111,2222)
{
	A1=a;
	B1=b;
}
void C::assign(int a,int b)
{
	A1=a;
	B1=b;
}
void C::display()
{
	cout<<A1<<" "<<B1<<endl;
}
C::~C()
{
	cout<<"C constructor"<<endl;
}
//A::A()
//{
//	cout<<"bharath"<<endl;
//}
//B::B()
//{
//	cout<<"bharath hero"<<endl;
//}
C::C():B(22,33)
{
	A1=222;
	B1=333;
	cout<<A1<<" "<<B1<<endl;
	cout<<"arun universal boss"<<endl;
}
int main()
{
   C obj1;
   C obj2(10);
   C obj3(12,13);
}
