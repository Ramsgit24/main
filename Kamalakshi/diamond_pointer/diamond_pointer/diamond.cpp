#include<iostream>
using namespace std;

class A
{
	int x;
	int y;
public:
	A()
	{
		x = 10;
		y = 20;
		cout << "A constructor" << endl;
	}
	virtual void assign(int a, int b) // Virtual function
	{
		x = a;
		y = b;
		cout << "A assign" << endl;
	}
	virtual void display() // Virtual function
	{
		cout << "A display" << endl;
		cout << x << " " << y << endl;
	}
	virtual ~A() // Virtual destructor
	{
		cout << "A destructor" << endl;
	}
};

class B : virtual public A
{
	int p;
	int q;
public:
	B()
	{
		p = 30;
		q = 40;
		cout << "B constructor" << endl;
	}
	void assign(int a, int b) 
	{
		p = a;
		q = b;
		cout << "B assign" << endl;
	}
	void display() 
	{
		cout << "B display" << endl;
		cout << p << " " << q << endl;
	}
	virtual ~B()
	{
		cout << "B destructor" << endl;
	}
};

class C : virtual public A
{
	int r;
	int s;
public:
	C()
	{
		r = 10;
		s = 20;
		cout << "C constructor" << endl;
	}
	void assign(int a, int b) 
	{
		r = a;
		s = b;
		cout << "C assign" << endl;
	}
	void display() 
	{
		cout << "C display" << endl;
		cout << r << " " << s << endl;
	}
	virtual ~C()
	{
		cout << "C destructor" << endl;
	}
};

class D : public B, public C
{
	int m;
	int n;
public:
	D()
	{
		m = 10;
		n = 20;
		cout << "D constructor" << endl;
	}
	void assign(int a, int b) 
	{
		m = a;
		n = b;
		cout << "D assign" << endl;
	}
	void display() 
	{
		cout << "D display" << endl;
		cout << m << " " << n << endl;
	}
	virtual ~D()
	{
		cout << "D destructor" << endl;
	}
};

int main()
{
	A*obj1=new A;
	A*obj2=new B;
	A*obj3=new C;
	A*obj4=new D;
	B*obj5=new B;
	B*obj6=new D;
	C*obj7=new C;
	C*obj8=new D;
	D*obj9=new D;
	obj4->assign(11, 22); // This will call D's assign because of virtual functions
	obj4->display(); // This will call D's display because of virtual functions
	obj3->assign(44,55);
	obj3->display();
	delete(obj1);
	delete(obj2);
	delete(obj3);
	delete(obj4);
	delete(obj5);
	delete(obj6);
	delete(obj7);
	delete(obj8);
	delete(obj9);
	return 0;
}
