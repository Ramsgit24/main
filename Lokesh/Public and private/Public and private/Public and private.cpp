// Public and private.cpp : main project file.

#include "stdafx.h"
#include<iostream>
using namespace std;
/*struct emp
{
public:
	int x,y;
	
private:
	void assign(int a,int b)
	{
		x=a;
		y=b;
	}
	void display()
	{
		cout<<x<<" "<<y<<" "<<endl;
	}

public:
	void check()
	{
		assign(11,222);
		display();
	
	}
};
	int main()
	{
		struct emp e1;
		e1.x=10;
		e1.y=20;
		e1.check();
	}*/
struct emp
{
private:
	int a;
public:
	int b;
private:
	int c;
	void check();
public:
	void assign(int x,int y,int z);
private:
	void display();
public:
	void show();
};
void emp::check()
{
	cout<<"check"<<endl;
}
void emp::assign(int x,int y,int z)
{
	a=x;
	b=y;
	c=z;
}
void emp::display()
{
	cout<<a<<" "<<b<<" "<<c<<endl;
}
void emp::show()
{
	display();
	check();
}
int main()
{
	struct emp abc;
	abc.assign(11,22,33);
	abc.b=44;
	abc.show();
}

