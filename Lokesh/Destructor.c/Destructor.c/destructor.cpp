/*#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		cout<<"A constructor"<<endl;
		x=11;
		y=12;
	}
	~A()
	{
		cout<<"A destructor"<<endl;
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
	A obj1;
	A obj2;
	obj1.assign(33,44);
	obj1.display();
	obj2.display();
}*/



//inheritance of destructor


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
		x=11;
		y=12;
	}
	A(int a,int b)
		                         // 2 paramaterised constructor
	{
		x=30;
		y=40;
	}
    ~A()
	{
		cout<<"A destructor"<<endl;
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
class B:public A
{
	int p;
	int q;
public:
	B()
	{
		cout<<"B constructor"<<endl;
		p=11;
		q=12;
	}
	B(int a,int b)     // 2 parameteried constructor
	{
		p=66;
		q=77;
	}
	~B()
	{
		cout<<"B destructor"<<endl;
	}
	void assign(int a,int b)
	{
		p=a;
		q=b;
	}
	void display()
	{
		cout<<p<<" "<<q<<endl;
	}
};
int main()
{
	/*A obj1;
	B obj2;
	obj1.assign(33,44);
	obj2.assign(55,66);
	obj1.display();
	obj2.display();
	*/
	B obj1;
	B obj2(11,22);
}




