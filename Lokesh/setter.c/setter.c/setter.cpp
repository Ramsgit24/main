#include<iostream>
using namespace std;
class A
{
mutable int x;
	//int y;
public:
	A()
	{
		x=10;
		//y=20;
	}
	void setter(int a)const
	{
	set(a);	
	}
	void set(int a)const
	{
		x=a;
	}
	void display()const
	{
		cout<<x<<endl;
	}
};
int main()
{
	const A obj;
	obj.setter(50);
	obj.display();
}

