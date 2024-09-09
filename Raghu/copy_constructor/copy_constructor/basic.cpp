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
	void assign(int x,int y)
	{
	this->x=x;//pointer holds the current object adderss
	this->y=y;//(this->) pointer
	}
	/*void assign(int x,int y)
	{
	x=x;
	y=y;
	}*/
	void disp()
	{
		cout<<x<<" "<<y<<endl;
		cout<<this<<endl;
	}
	/*A(const A& tobj1)
	{
		x=tobj1.x;
		y=tobj1.y;
	}*/
	/*A(const A& tobj1)
	{
		x=tobj1.x+10;
		y=tobj1.y+20;
	}*/
	A(const A& tobj1)
	{
	this->x=tobj1.x+10;
	this->y=tobj1.y+20;
	}
};
int main()
{
	A obj1;
	obj1.assign(11,22);
	obj1.disp();
	A obj2=obj1;
	obj2.disp();
}