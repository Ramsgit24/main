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
	A(A& tobj1)
	{
		this->x=tobj1.x;
		this->y=tobj1.y;
	}
	void assign(int x,int y)
	{
		this->x=x;
		this->y=y;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
		cout<<this<<endl;
	}
};
	int main()
	{
		/*A obj1;
		obj1.assign(11,22);
		obj1.display();
		A obj2;
		obj2.display();
		A obj1;
		obj1.display();
		A obj;
		A obj1=obj;
		obj1.display();
		obj.display();*/
		A obj1;
		obj1.assign(33,44);
		A obj2=obj1;
		obj1.display();
		obj2.display();
	}