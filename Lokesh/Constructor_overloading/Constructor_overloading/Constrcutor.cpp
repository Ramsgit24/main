/*#include<iostream>
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
	A(int a)
	{
		x=a;
		y=a;
	}
	A(int a,int b)
	{
		x=a;
		y=b;
	}
	

void display()
{
	cout<<x<<" "<<y<<endl;
}
};
int main()
{
	A obj1('A','B');
	A obj2(11,33);
	A obj3;
	
    obj1.display();
	obj2.display(); 
	obj3.display();
}*/
#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		x=22;
		y=33;
	}
	A(float a,float b)
	{
		x=a;
		y=a;
	}
	A(int a,int b)
	{
		x=a;
		x=b;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	A obj1(10.23,11.23);
	A obj2(21);
	A obj3;
	obj1.display();
	obj2.display();
	obj3.display();
}

