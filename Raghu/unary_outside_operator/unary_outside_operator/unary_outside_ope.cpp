#include<iostream>
using namespace std;
class A
{
	public:
	int x;
	int y;

	A()
	{
		x=10;
		y=20;
	}

	//A operator++(int)//post incr
	//{
	//	A tobj1;
	//	tobj1.x=x++;
	//	tobj1.y=y++;
	//	return tobj1;
	//}
	//A operator++()//pre incr
	//{
	//	A tobj2;
	//	tobj2.x=++x;
	//	tobj2.y=++y;
	//	return tobj2;
	//}
	void disp()
	{
		cout<<x<<" "<<y<<endl;
	}
	friend A operator++(A &tobj1);
	friend A operator++(A &tobj2,int);
};

A operator++(A &tobj1)//pre incr
	{
	
	tobj1.x=++tobj1.x;
	tobj1.y=++tobj1.y;
	return tobj1;
	}
A operator++(A &tobj1,int a)
{
	A tobj2;
	tobj2.x=tobj1.x++;
	tobj2.y=tobj1.y++;
	return tobj2;
}
int main()
{
	A obj1;
	A obj2=++obj1;
	A obj3=obj1++;
	obj2.disp();
	obj3.disp();
	obj1.disp();
}