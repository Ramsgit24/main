#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		cout<<"A constructor"<<endl;
		x=10;
		y=20;
	}
	A(int a)
	{
		x=a;
	}
	A(int a,int b)
	{
		x=a;
		y=b;
	}
	A(float a,float b)
	{
		x=a;
		y=b;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
};

int main()
{
	A obj;
	obj.display();
	A obj1(10);
	obj1.display();
	A obj2(10,20);
	obj2.display();
	A obj3(111.22f,333.22f);
	obj3.display();
}
