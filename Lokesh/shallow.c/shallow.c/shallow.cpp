#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		x=10;
		y=20;
	}
	void assign(int a,int b)
	{
       x=a;
	   y=b;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
};
class B:public A
{
	int p;
	int q;
public:
	B()
	{
		p=30;
		q=40;
	}
	void assign(int a,int b)
	{
       p=a;
	   q=b;
	}
	void display()
	{
		cout<<p<<" "<<q<<endl;
	}
};
class C:public B
{
	int m;
	int n;
public:
	C()
	{
		m=50;
		n=60;
	}
	void assign(int a,int b)
	{
       m=a;
	   n=b;
	}
	void display()
	{
		cout<<m<<" "<<n<<endl;
	}
};
int main()
{
	C obj1;
	obj1.assign(12,23);
	obj1.display();
	B obj2=obj1;
	obj2.assign(88,77);
	obj2.display();
	A obj3=obj2;
	obj3.display();
}