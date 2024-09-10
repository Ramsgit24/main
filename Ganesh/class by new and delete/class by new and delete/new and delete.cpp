#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		cout<<"a constructor"<<endl;
		x=10;
		y=20;
	}
	void assign(int a,int b)
	{
		cout<<"A assign"<<endl;
		x=a;
		y=b;

	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
		cout<<"a display"<<endl;
	}
	virtual~A()
	{
		cout<<"a distructor"<<endl;
	}
};
class B:public A
{
	int p;
	int q;
public:
	B()
	{
		cout<<"b constructor"<<endl;
		p=10;
		q=20;
	}
	void assign(int a,int b)
	{
		cout<<"b assign"<<endl;
		p=a;
		q=b;

	}
	void display()
	{
		cout<<p<<" "<<q<<endl;
		cout<<"b display"<<endl;
	}
	~B()
	{
		cout<<"b distructor"<<endl;
	}
};
class C: public B
{
	int x;
	int y;
public:
	C()
	{
		cout<<"c constructor"<<endl;
		x=10;
		y=20;
	}
	void assign(int a,int b)
	{
		cout<<"C assign"<<endl;
		x=a;
		y=b;

	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
		cout<<"C display"<<endl;
	}
	~C()
	{
		cout<<"c distructor"<<endl;
	}
};
int main()
{
	/*A* pobj1=new A;
	A* pobj2=new A;
	B* pobj4=new B;
	pobj4->assign(22,33);
	pobj4->display();
	delete(pobj1);
	delete(pobj2);
	delete(pobj4);*/

	A*obj1=new B;
	A*obj2=new A;
	//B*obj3=new A;
	B*obj3=new B;
	A*obj6=new C;
	C*obj5=new C;


}




