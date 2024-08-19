#include<iostream>
using namespace std;
namespace abc
{
	int a,b;
	void fun()
	{
		cout<<"abc function"<<endl;
	}
	void show1()
	{
		cout<<a<<":"<<b<<endl;
	}
};
namespace xyz
{
	int a,b;
	void fun()
	{
		cout<<"xyz function"<<endl;
	}
	void show2()
	{
		cout<<a<<":"<<b<<endl;
	}
};
using namespace xyz;
int main()
{
	int a,b;
	using namespace abc;
	xyz::a=10;
	abc::b=20;
	ab c::fun();
	show1();
	show2();
}