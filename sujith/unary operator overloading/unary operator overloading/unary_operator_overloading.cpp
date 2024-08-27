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
	/*A  operator-()
	{
	x=-x;
	y=-y;
	return *this;
	}*/
	void assign(int a,int b)
	{
		x=a;
		y=b;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
	/*A operator++()
	{
	A tobj2;
	tobj2.x=++x;
	tobj2.y=++y;
	return tobj2;
	}
	A operator++(int a)
	{
	A tobj1;
	tobj1.x=x++;
	tobj1.y=y++;
	cout<<"dummy"<<a<<endl;
	return tobj1;
	}*/
	friend A operator-(A);
	friend A operator++(A);
	friend A operator++(A,int);
};
A operator-(A tobj1)
{
	tobj1.x=-tobj1.x;
	tobj1.y=-tobj1.y;
	return tobj1;
}
A operator++(A tobj1)
{
	A tobj2;
	tobj2.x=++tobj1.x;
	tobj2.y=++tobj1.y;
	return tobj2;
}
A operator++(A tobj1,int a)
{
	
	tobj1.x=tobj1.x ++;
	tobj1.y=tobj1.y ++;
	return tobj1;
}
int main()
{
	A obj1;
	A obj2=-obj1;
	obj2.display();
	obj1.display();
	//obj1.operator-();
	obj1.display(); // 10 20
	A obj3=++obj1;
	A obj4=obj1++;
	obj3.display();
	obj4.display();
	obj1.display();
}