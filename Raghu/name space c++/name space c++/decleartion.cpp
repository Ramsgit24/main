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
		void disp();
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
	y=20;
}
void xyz::A::disp()
{
	cout<<x<<" "<<y<<endl;
}
void xyz::fun()
{
	cout<<"fun function"<<endl;
	cout<<a<<" "<<b<<endl;
}
void xyz::check()
{
	cout<<"xyz check"<<endl;
}
int main()
{
	using namespace xyz;
	a=30;
	b=40;
	A obj1;

	obj1.x=44;
	obj1.y=55;
	obj1.disp();
	fun();
	check();

}