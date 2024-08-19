#include<iostream>
using namespace std;

namespace xyz
{
	int a,b;
	class A
	{
	public:
		int x,y;
		A();
		void disp();
	};
	void fun();
	class B
	{
	};
	void check();
};
//void fun();//ambiguity error will come if we use another fun functoin in gloabl