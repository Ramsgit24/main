#include<iostream>
using namespace std;

class A
{
	int x,y;
public:
	A()
	{
		x=10;
		y=20;
	}

	A operator+(A tobj1)
	{
		tobj1.x=x+tobj1.x;
		tobj1.y=y+tobj1.y;
		return tobj1;

	}
	
	A operator-(A tobj1)
	{
		tobj1.x=x-tobj1.x;
		tobj1.y=y-tobj1.y;
		return tobj1;

	}

	A operator*(A tobj1)
	{
		A tobj3;
		tobj3.x=x*tobj1.x;
		tobj3.y=y*tobj1.y;
		return tobj3;

	}

	void disp()
	{
		cout<<x<<" "<<y<<endl;
	}
};

int main()
{
	A obj1,obj2,obj3,obj4,obj5;
	obj3=obj1+obj2;
	obj3.disp();
	obj4=obj1-obj2;
	obj4.disp();
	obj5=obj1*obj2;
	obj5.disp();
}