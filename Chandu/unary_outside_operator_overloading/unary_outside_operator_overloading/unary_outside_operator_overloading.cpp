#include<iostream>
using namespace std;

class A
{
public:
	int x,y;
	A()
	{
		x=10;
		y=20;
	}
	void disp()
	{
		cout<<x<<" "<<y<<endl;
	}
	friend A operator-(A);
	friend A operator++(A &);
	friend A operator++(A &,int);
	friend A operator--(A &);
	friend A operator--(A &,int);
};

A operator-(A tobj1)
{
	tobj1.x=-tobj1.x;
	tobj1.y=-tobj1.y;
	return tobj1;
}

A operator++(A &tobj1)
{
	
	tobj1.x=++tobj1.x;
	tobj1.y=++tobj1.y;
	return tobj1;
}

A operator++(A &tobj1,int a)
{
	A tobj2=tobj1;
	tobj1.x=tobj1.x++;
	tobj1.y=tobj1.y++;
	return tobj2;
}

A operator--(A &tobj1)
{
	
	tobj1.x=--tobj1.x;
	tobj1.y=--tobj1.y;
	return tobj1;
}

A operator--(A &tobj1,int a)
{
	A tobj2=tobj1;
	tobj1.x=tobj1.x--;
	tobj1.y=tobj1.y--;
	return tobj2;
}

int main()
{
	A obj1,obj2,obj3;

	cout<<"Actual x and y values are:"<<endl;
	obj1.disp();
	A obj4=-obj1;
	cout<<"x and y values after operator- overloading"<<endl;
	obj4.disp();

	A obj5=++obj2;
	A obj6=obj2++;
	cout<<"x and y values after pre-increment"<<endl;
	obj5.disp();
	cout<<"x and y values after post-increment"<<endl;
	obj6.disp();
	cout<<"x and y values after both preincrement and postincrement"<<endl;
	obj2.disp();

	A obj7=--obj3;
	A obj8=obj3--;
	cout<<"x and y values after pre-decrement"<<endl;
	obj7.disp();
	cout<<"x and y values after post-decrement"<<endl;
	obj8.disp();
	cout<<"x and y values after both pre-decrement and post-decrement"<<endl;
	obj3.disp();
}

