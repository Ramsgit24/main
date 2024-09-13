// Structs_1.cpp.cpp : main project file.

#include "stdafx.h"
#include<iostream>
using namespace std;
struct emp
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
		cout<<x<<y<<endl;
	}
};
int main()
{
	struct emp Z;
	Z.assign(33,55);
	Z.display();
}
