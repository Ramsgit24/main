// Friend.cpp : main project file.

#include "stdafx.h"
#include<iostream>

using namespace std;
/*class A
{
	int x;
	int y;
public:
	void assign(int a,int b)
	{
		x=a;
		y=b;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
	friend void check();
	friend void show();
	friend int main();
};
void check()
{
	A obj1;
	obj1.x=100;
	obj1.y=200;
	obj1.display();
}
void show()
{
	A obj2;
	obj2.x=111;
	obj2.y=333;
	obj2.display();
}

int main()
{    
	A obj1;
	obj1.x=2222;
	A obj2;
	obj2.x;
	obj1.display();
	obj2.display();
   
    check();
	show();
}
*/
//2nd program
class A
{
	int x;
	int y;
public:
	void assign(int a,int b)
	{
		x=a;
		y=b;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
};
class B
{
	int p;
	int q;
public:
	void assign(int a,int b)
	{
		p=a;
		q=b;
	}
	void display()
	{
		cout<<p<<" "<<q<<endl;
	}
};
int main()
{
	A obj1;
	A obj2;
    obj1.assign(11,22);
	obj2=obj1;
	obj2.assign(33,44);
	obj2.display();
}