#include<iostream>
using namespace std;
namespace loki
{
	int a;
	int b;
	void fun()
	{
		cout<<"xyz function"<<endl;
	}
	void show()
	{
		cout<<a<<" "<<b<<endl;
	}
};

namespace loki1
{
	int a;
	int b;
	void fun()
	{
		cout<<"dept fun"<<endl;
	}
	void show1()
	{
		cout<<a<<" "<<b<<endl;
	}
};
using namespace loki;
int main()
{
	using namespace loki1;
	loki::a=30;
	loki::b=40;
	loki1::a=20;
	loki1::b=50;
	show();
	show1();
}