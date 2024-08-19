#include<iostream>
using namespace std;
class A
{
	public:
mutable	int x;
mutable	int y;
	A()
	{
		x=10;
		y=20;
		cout<<" A constructor "<<endl;
	}
	void updatex(int a) const
	{
		x=a;
		
	}
	void updatey(int a) const
	{
		y=a;
		
	}
	void display() const
	{
       cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	const A obj1;
	obj1.updatex(100);//100 20
	obj1.display();
	obj1.x=200;
	obj1.display();//200 20
	obj1.updatey(200);
	obj1.display();//200 200
	obj1.y=300;
	obj1.display();//200 300
	//we can access normal object to const function.
}


//can we access data ,if it is  a constant only.
#include<iostream>
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
		cout<<" A constructor "<<endl;
	}
	void updatex(int a) const
	{
		setx(a);
		
	}
	void setx(int a) const
	{
		x=a;
	}
	void display() 
	{
       cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	 A obj1;//10 20
	obj1.updatex(33);
	obj1.display();
}