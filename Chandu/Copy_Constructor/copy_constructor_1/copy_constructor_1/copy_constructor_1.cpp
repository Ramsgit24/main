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

	void assign(int x,int y)
	{
		this->x=x;// if we dont use this pointer both x and y are local members 
					//to that assign function i.e, 22, 44 it wont modify class
					// datamembers x and y so if we access obj.disp() 10,20 will come as
					// output.
		this->y=y;//this pointer holds address of current object
	}

	void disp()
	{
		cout<<x<<" "<<y<<endl;
		//cout<<this<<endl;
	}

	A(const A& tobj1)//copy constructor
	{
		cout<<"copy constructor called"<<endl;
		x=tobj1.x.+10;
		y=tobj1.y+20;
		cout<<x<<" "<<y<<endl;
	}
	friend A fun(A tobj1);
};
A fun( A tobj1)
	{
		tobj1.x=tobj1.x+333;
		tobj1.y=tobj1.y+444;
		return tobj1;
	}

int main()
{
	A obj1;
	A obj2=obj1;
	obj1.disp();
	obj2.disp();
	A obj3=fun(obj2);
	//A obj4=fun(obj3);
	obj3.disp();
}