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
	/*A operator-() // inside of the class 
	{
		A tobj1;
		tobj1.x=-x;
		tobj1.y=-y;
		return tobj1;
	}*/
	friend A operator-(A);
};
A operator-(A tobj1)  // outside of the class 
{
	tobj1.x=-tobj1.x;
	tobj1.y=-tobj1.y;
	return tobj1;
}
int main()
{
	A obj1;
	A obj2=-obj1;
	obj2.display();
	obj1.display();
	A obj3=++obj1;
	A obj4=obj1++;
	obj3.display();
	obj4.display();
	obj1.display();
}