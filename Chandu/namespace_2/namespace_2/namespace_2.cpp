#include<iostream>
using namespace std;

namespace xyz
{
	int a,b;
	void fun()
	{
		cout<<"xyz fun"<<endl;
	}
	void show1()
	{
		cout<<a<<" "<<b<<endl;
	}
};
namespace abc
{
	int a,b;
	void fun()
	{
		cout<<"abc fun"<<endl;
	}
	void show2()
	{
		cout<<a<<" "<<b<<endl;
	}
};

using namespace xyz;

int main()
{
	using namespace abc;
	//fun();//ambguity error
	//a=30;//ambguity error
	//b=40;//ambguity error
	xyz::fun();//specifically we assigning to xyz namespace so no ambiguity in this case
	xyz::a=333;
	xyz::b=444;

	show1();
	show2();
}