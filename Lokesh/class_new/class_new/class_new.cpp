//#include<iostream>
//using namespace std;
//class A
//{
//	int x;
//	int y;
//public:
//	A()
//	{
//		cout<<" A constrctor"<<endl;
//		x=10;
//		y=20;
//
//	}
//	void assign(int a,int b)
//	{
//		x=a;
//		y=b;
//	}
//	void display()
//	{
//		cout<<"A class"<<endl;
//		cout<<x<<" "<<y<<endl;
//	}
//	virtual ~A()
//	{
//		cout<<" A distrctor"<<endl;
//	}
//};
//class B:public A
//{
//	int p;
//	int q;
//public:
//	B()
//	{
//		cout<<" B constrctor"<<endl;
//		p=30;
//		q=40;
//
//	}
//	void assign(int a,int b)
//	{
//		p=a;
//		q=b;
//	}
//	void display()
//	{
//		cout<<"B class"<<endl;
//		cout<<p<<" "<<q<<endl;
//	}
//	~B()
//	{
//		cout<<"B distructor"<<endl;
//	}
//};
//
//	int main()
//	{
//		A* pobj1=new A;
//		A* pobj2=new B;
//		//B* pobj3=new A'
//		B*pobj4=new B;
//		pobj1->assign(121,220);
//		pobj1->display();
//	}






#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		cout<<" A constrctor"<<endl;
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
		cout<<"A class"<<endl;
		cout<<x<<" "<<y<<endl;
	}
	virtual ~A()
	{
		cout<<" A distrctor"<<endl;
	}
};
class B:public A
{
	int p;
	int q;
public:
	B()
	{
		cout<<" B constrctor"<<endl;
		p=30;
		q=40;

	}
	void assign(int a,int b)
	{
		p=a;
		q=b;
	}
	void display()
	{
		cout<<"B class"<<endl;
		cout<<p<<" "<<q<<endl;
	}
	~B()
	{
		cout<<"B distructor"<<endl;
	}
};
class C:public B
{
	int r;
	int s;
public:
	C()
	{
		cout<<" C constrctor"<<endl;
		r=30;
		s=40;

	}
	void assign(int a,int b)
	{
		r=a;
		s=b;
	}
	void display()
	{
		cout<<"class"<<endl;
		cout<<r<<" "<<s<<endl;
	}
	~C()
	{
		cout<<"C distructor"<<endl;
	}
};


	int main()
	{
		//A* pobj1=new A;
		//A* pobj2=new B;
		////B* pobj3=new A'
		//B*pobj4=new B;
		//pobj1->assign(121,220);
		//pobj1->display();

		A* pobj1=new A;
		A* pobj2=new B;
		A* pobj3=new C;
		pobj3.display();
}