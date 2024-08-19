#include"namespace.h"

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
	cout<<"check function"<<endl;
	
}
int main()
{
	//int a;
	using namespace xyz;

	a=111;
	b=222;

	A obj1;
	B obj2;
	obj1.x=33;
	obj1.y=44;
	obj1.disp();
	fun();// output is 0 and 2 not 1 and 2
	check();
}
