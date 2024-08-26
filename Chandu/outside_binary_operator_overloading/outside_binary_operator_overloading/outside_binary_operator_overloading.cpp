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
	friend A operator+(A,A);
	friend A operator-(A,A);
	friend A operator*(A,A);

	void disp()
	{
		cout<<x<<" "<<y<<endl;
	}
};

A operator+(A tobj1,A tobj2)
{
	A tobj3;
	tobj3.x=tobj1.x+tobj2.x;
	tobj3.y=tobj1.y+tobj2.y;
	return tobj3;
}

A operator-(A tobj1,A tobj2)
{
	A tobj3;
	tobj3.x=tobj1.x-tobj2.x;
	tobj3.y=tobj1.y-tobj2.y;
	return tobj3;
}
A operator*(A tobj1,A tobj2)
{
	A tobj3;
	tobj3.x=tobj1.x*tobj2.x;
	tobj3.y=tobj1.y*tobj2.y;
	return tobj3;
}

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
