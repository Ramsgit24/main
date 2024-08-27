//multi-level
#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A(int);
	A(int,int);
	void assign(int,int);
	void display();
	~A();
};
class B:public A
{
	int p;
	int q;
public:
	B();
	B(int);
	B(int,int);
	void assign(int,int);
	void display();
	~B();
};
class C:public B
{
	int m;
	int n;
public:
	C();
	C(int);
	C(int,int);
	void assign(int,int);
	void display();
	~C();
};
A::A(int a)
{
	x=a;
	y=a;
	cout<<"1 param constructor"<<endl;
}
A::A(int a,int b)
{
	x=a;
	y=b;
	cout<<"2 param constructor"<<endl;
}
void A::assign(int a,int b)
{
	x=a;
	y=b;
}
void A::display()
{
	cout<<x<<" "<<y<<endl;
}
A::~A()
{
	cout<<"A destructor"<<endl;
}
B::B():A(10)
{
	p=21;
	q=22;
	cout<<"0 param constructor"<<endl;
}
B::B(int a):A(11,22)
{
	p=a;
	q=a;
	cout<<"1 param constructor"<<endl;
}
B::B(int a,int b):A(33)
{
	p=a;
	q=b;
	cout<<"2 param constructor"<<endl;
}
void B::assign(int a,int b)
{
	p=a;
	q=b;
}
void B::display()
{
	cout<<p<<" "<<q<<endl;
}
B::~B()
{
	cout<<"B destructor"<<endl;
}
C::C():B(11)
{
   m=77;
   n=88;
   cout<<"0 param constructor"<<endl;
}
C::C(int a):B(44,55)
{
	m=a;
	n=a;
	cout<<"1 param constructor"<<endl;
}
C::C(int a,int b):B(66)
{
	m=a;
	n=b;
	cout<<"2 param constructor"<<endl;
}
void C::assign(int a,int b)
{
	m=a;
	n=b;
}
void C::display()
{
	cout<<m<<" "<<n<<endl;
}
C::~C()
{
	cout<<"C destructor"<<endl;
}

int main()
{
	/*C obj1(11);
	obj1.display();
	C obj2(22,33);
	obj2.display();
	C obj3;
	obj3.display();*/

	B obj1(11);
	obj1.display();
	B obj2(22,33);
	obj2.display();
}


//multiple
#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A(int);
	A(int,int);
	void assign(int,int);
	void display();
	~A();
};
class B
{
	int p;
	int q;
public:
	B(int);
	B(int,int);
	void assign(int,int);
	void display();
	~B();
};
class C:public A,public B
{
	int m;
	int n;
public:
	C();
	C(int);
	C(int,int);
	void assign(int,int);
	void display();
	~C();
};
A::A(int a)
{
	x=a;
	y=a;
	cout<<"1 param constructor"<<endl;
}
A::A(int a,int b)
{
	x=a;
	y=b;
	cout<<"2 param constructor"<<endl;
}
void A::assign(int a, int b)
{
	x=a;
	y=b;
}
void A::display()
{
	cout<<x<<" "<<y<<endl;
}
A::~A()
{
	cout<<"A destructor"<<endl;
}
B::B(int a)
{
	p=a;
	q=a;
	cout<<"1 param constructor"<<endl;
}
B::B(int a,int b)
{
	p=a;
	q=b;
	cout<<"2 param constructor"<<endl;
}
void B::assign(int a, int b)
{
	p=a;
	q=b;
}
void B::display()
{
	cout<<p<<" "<<q<<endl;
}
B::~B()
{
	cout<<"B destructor"<<endl;
}
  
C::C():A(77),B(88)
{
	cout<<"C default constructor"<<endl;
}
C::C(int a):A(11,22),B(33)
{
	m=a;
	n=a;
	cout<<"1 param constructor"<<endl;
}
C::C(int a,int b):B(44,55),A(66)
{
	m=a;
	n=b;
	cout<<"2 param constructor"<<endl;
}
void C::assign(int a, int b)
{
	m=a;
	n=b;
}
void C::display()
{
	cout<<m<<" "<<n<<endl;
}
C::~C()
{
	cout<<"C destructor"<<endl;
}
int main()
{
	C obj(11);
	C obj1;
	
}
  
  
  
