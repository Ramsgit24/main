#include<iostream>
using namespace std;
class A
{
	int x;
	float y;
	char z;
public:
	void assign(int a,float b,char c)
	{
		x=a;
		y=b;
		z=c;
	}
	void display()
	{
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
	friend class B;
	friend hhh();
};
class B
{
	int p;
	int q;
	int r;
public:
	void assign(int a,int b,int c)
	{
		p=a;
		q=b;
		r=c;
	}
	void display()
	{
		cout<<p<<" "<<q<<" "<<r<<endl;
	}
	void check()
	{
		A E;
		E.x=10;
		E.y=11.3f;
		E.z='h';
		E.display();
	}
};
void hhh()
{
	A Bh;
	Bh.x=12;
	Bh.y=12.5;
	Bh.z='f';
	Bh.display();

}
int main()
{
	A obj;
	obj.assign(11,22.3,'c');
	obj.display();
	//B obj1;
	//obj1.assign(11,12,13);
	//obj1.display();
	B obj1;
	obj1.check();
	hhh();

}
