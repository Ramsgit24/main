#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	void assign(int a,int b);
	void display();
	void bharath();
	friend class B;
	
};
void A::assign(int a,int b)
{
x=a;
y=b;
}
void A::display()
{
	cout<<x<<" "<<y<<endl;
}
class B
{
    int p;
	int q;
public:
	void assign(int w,int e);
	void display();
	friend void A::bharath();
	
	//friend int main();
};
void B::assign(int w,int e)
{
	A o1;
	o1.x=44;
	o1.y=33;
cout<<o1.x<<" "<<o1.y<<endl;
}
void B::display()
{
	cout<<p<<" "<<q<<endl;
}
void A::bharath()
{
	B obj;
	obj.p=12;
	obj.q=22;
	obj.display();
}

int main()
{
	A obj;
	obj.bharath();
	B obj1;
	obj1.assign(66,77);
	/*A obj;
	obj.x=10;
	obj.y=20;
	obj.assign(11,20);
	obj.display();*/
	//B obj1;
	////obj1.assign(33,44);
	//obj1.p=22;
	//obj1.q=33;
	//obj1.display();
}