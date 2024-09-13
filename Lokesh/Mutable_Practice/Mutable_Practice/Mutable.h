#include<iostream>
using namespace std;
class A
{

mutable	int x;
mutable	int y;
public:
	A();
	void update(int,int)const;
	void display()const;
};