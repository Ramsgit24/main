#include<iostream>
using namespace std;
class A
{
mutable int x;
        int y;
public:
	A()
	{
		x=20;
		y=40;
	}
	void assign(int a,int b)const
	{
		x=a;
		y=b;
	}
	void display()const
	{
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	const A obj1;
	obj1.display();
}