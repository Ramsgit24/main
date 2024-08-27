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
		A()
		{
			x=10;
			y=20;
		}
		void display()
		{
			cout<<x<<" "<<y<<endl;
		}
	};
	void fun()
	{
		cout<<"fun function"<<endl;
		cout<<a<<" "<<b<<endl;
	}
	class B
	{

	};
	void check()
	{
		cout<<"check fun"<<endl;
	}
}
//void fun()
//{
//	cout<<"fun function outside"<<endl;
//}
int main()
{
	int a;
	using namespace xyz;
	a=20;
	b=30;
	B b;
	A a1;
	a1.x=33;
	a1.y=44;
	a1.display();
	fun();
	check();

}