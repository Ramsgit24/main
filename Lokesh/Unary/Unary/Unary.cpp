#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		x=10;
		y=20;
	}
	void assign(int a,int b)
	{
		x=a;
		y=b;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
	A operator++()
	{
		A obj2;
		obj2.x=++x;
		obj2.y=++y;
		return obj2;
	}
	A operator++(int a)
	{
		A obj1;
		obj1.x=x++;
		obj1.y=y++;
		return obj1;
	}
};
int main()
{
	A obj1;
	++obj1;
	obj1.display();
	A obj2;
	A obj3=obj2++;
	obj3.display();

}