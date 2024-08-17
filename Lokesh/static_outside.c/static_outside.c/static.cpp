/*#include<iostream>
using namespace std;
class A
{
public:
	int x;
	int y;
	static	int p;
	static int q;
	A()
	{
		x=10;
		y=20;
		p=30;
		q=40;
	}
	void assign(int a,int b)
	{
		x=a;
		y=b;
		p=a;
		q=b;
	}
	void display()
	{
		cout<<x<<" "<<y<<" "<<p<<" "<<q<<endl;
	}
};
int A::p;
int A::q;
int main()
{
	A obj1;
	obj1.assign(11,22);
	obj1.x=222;
	obj1.y=333;
	A obj2;
	obj2.p=555;
	obj2.q=554;
	obj2.x=444;
	A::p=876;
	A::q=776;
	obj1.display();
	A obj3;
	obj3.display();
	obj2.display();
	obj1.display();
}*/











//non static members

#include<iostream>
using namespace std;
class A
{
public:
	int x;
	int y;
	static int p;
	static int q;
	A()
	{
		x=10;
		y=15;
		p=20;
		q=25;
	}
	void assign(int a,int b)
	{
		x=a;
		y=b;
		p=a;
		q=b;
	}
	void display()
	{
		cout<<x<<" "<<y<<" "<<p<<" "<<q<<" "<<endl;
	}
	static void show()
	{
		//x=100;          //these two are a non static member function
		//y=300;          //non static
		p=121;
		q=131;
		cout<<p<<" "<<q<<endl;

		cout<<"A show static member functions"<<endl;
	}
};
int A::p;
int A::q;
int main()
{
	//A A1;
	//A obj1;           we can access with out object creation also.............
	A::p=33;
	A::q=44;
	cout<<A::p<<" "<<A::q<<endl;
	//A1.display();
	A::show();
	A1.display();
	//obj1.show();
}
