#include<iostream>
using namespace std;
class A
{
	int x;
	int y;

public:
	A()
	{
		cout<<"A constructor"<<endl;
		x=10;
		y=20;
	}

	void Assign(int a,int b)
	{
		x=a;
		y=b;
	}
	void Display()
	{
		cout<<x<<" "<<y<<endl;
	}

};

int main()
{
	A obj1;
	obj1.Display();//10 20
	obj1.Assign(11,22);
	obj1.Display();//11 22
}

//outside the function.
#include<iostream>
using namespace std;
class A
{
	int x;
	int y;

public:

	A();//constructor declaration
	void Assign(int,int);
	void Display();
};
A::A()//constructor defination
{
	x=10;
	y=20;
}

void A::Assign(int a, int b)
{
	x=a;
	y=b;
}
void A::Display()
{
	cout<<x<<" "<<y<<endl;
}
int main()
{
	A obj1;
	obj1.Assign(11,22);
	obj1.Display();
}