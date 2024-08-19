#include"namespace.h"
xyz::A::A()
{
	x=111;
	y=222;
}
void xyz::A::display()
{
	cout<<x<<":"<<y<<endl;
}
void xyz::fun()
{
	cout<<"namespace fun function"<<endl;
	cout<<a<<":"<<b<<endl;
}

int main()
{
	using namespace xyz;
	a=11;
	b=22;
	A obj1;
	obj1.x=1111;
	obj1.display();
	fun();
}