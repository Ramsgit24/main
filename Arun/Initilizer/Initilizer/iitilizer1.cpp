#include<iostream>
using namespace std;
class A
{
	const int x;
	const int y;
public:
	A():x(33),y(44)
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
};
int main()
{
	A obj;
	obj.display();
	obj.assign(11,22);
	obj.display();
}

#include<iostream>
using namespace std;
class A
{
	int x;
	const int y;
public:
	A():x(33),y(44)
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
};
int main()
{
	
	A obj;
	obj.display();
	obj.assign(11,22);
	obj.display();
}


#include<iostream>
using namespace std;
class A
{
	mutable int x;
	mutable int y;
public:
	A():x(33),y(44)
	{
		x=10;
		y=20;
	}
	void assign(int a,int b) const
	{
		x=a;
		y=b;
	}
	void display() const
	{
		cout<<x<<" "<<y<<endl;
	}
};

int main()
{
	const A obj1;
	obj1.display();
	obj1.assign(11,22);
	obj1.display();

}