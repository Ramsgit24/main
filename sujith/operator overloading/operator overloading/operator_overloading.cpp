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
		A tobj2;
		tobj2.x=x+tobj1.x;
		tobj2.y=y+tobj2.y;
		return tobj2;
	}
	A operator/(A tobj1)
	{
		A tobj2;
		tobj2.x=x/tobj1.x;
		tobj2.y=y/tobj2.y;
		return tobj2;
	}
	A operator*(A tobj1)
	{
		A tobj2;
		tobj2.x=x*tobj1.x;
		tobj2.y=y*tobj2.y;
		return tobj2;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
friend A operator-(A tobj1,A tobj2);
};
A operator-(A tobj1,A tobj2)
{
	A tobj3;
	tobj3.x=tobj1.x-tobj2.x;
	tobj3.y=tobj1.y-tobj2.y;
	return tobj3;
}
int main()
{
	A obj1,obj2,obj4;
	A obj3=(obj1+obj2)+obj4;
	obj3.display();
	obj3=obj1/obj2;
	obj3.display();
	obj3=obj1*obj2;
	obj3.display();
	A obj5=obj1-obj2;
	obj5.display();
}