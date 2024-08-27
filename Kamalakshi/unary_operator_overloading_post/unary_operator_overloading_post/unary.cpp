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
	A operator++(int)
	{
		A tobj1;
		tobj1.x=x++;
		tobj1.y=y++;
		return tobj1;
		/*x=x++;
		y=y++;
		return *this;*/
	}
	A operator++()
	{
		A tobj2;
		tobj2.x=++x;
		tobj2.y=++y;
		return tobj2;
		/*x=++x;
		y=++y;
		return *this;*/
	}
	
};

int main()
{
	A obj1;
	/*A obj2=-obj1;
	obj2.display();
	obj1.display();*/
	//obj1.display();
	A obj4=++obj1;
	A obj3=obj1++;
	obj3.display();
	obj4.display();
	obj1.display();
}