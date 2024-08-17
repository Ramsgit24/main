/*#include<iostream>
using namespace std;
class B
{
	int p;
	int q;
public:
	void assign(int ,int);
	void display();
	void show();
};
class A
{
	int x;
	int y;
public:
	void assign(int ,int);
	void display();
	friend void B::show();

};
void A::assign(int a,int b)
{
	x=a;
	y=b;
}
void A::display()
{
	cout<<x<<" "<<y<<endl;

};
void B::assign(int a,int b)
{
	p=a;
	q=b;
}
void B::display()
{
	cout<<p<<" "<<q<<endl;
}
void B::show()
{
	A obj1;
	obj1.x=100;
	obj1.y=200;
	obj1.display();
}

int main()
{
	B obj2;
	obj2.show();
}*/
