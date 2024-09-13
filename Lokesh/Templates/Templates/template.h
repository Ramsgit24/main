#include<iostream>
using namespace std;
namespace xyz
{
	int a;
	int b;
	class A
	{
	public:
		int x;
		int y;
		A();
		void display();
	};
	void fun();
    class B
	{
	};
	void check();
    
};
xyz::A::A()
{
	x=10;
	y=40;
}
xyz::A::display()
{
	cout<<"Display funtion"<<endl;
}
xyz::fun()
{
	cout<<x<<" "<<y<<endl;
}
xyz::check()
{
	cout<<"check"<<endl;
}
