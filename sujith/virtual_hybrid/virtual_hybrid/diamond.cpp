//#include<iostream>
//using namespace std;
//class A
//{
//	int a,b;
//public:
//	A()
//	{
//		cout<<"A constructer"<<endl;
//		a=10;
//		b=20;
//	}
//	void assign(int x,int y)
//	{
//		cout<<"A assign"<<endl;
//		a=x;
//		b=y;
//	}
//	virtual void display()
//	{
//		cout<<"A display"<<endl;
//		cout<<a<<" "<<b<<endl;
//	}
//};
//class B:virtual public A
//{
//	int c,d;
//public:
//	B()
//	{
//		cout<<"B constructer"<<endl;
//		c=10;
//		d=20;
//	}
//	void assign(int x,int y)
//	{
//		cout<<"B assign"<<endl;
//		c=x;
//		d=y;
//	}
//	void display()
//	{
//		cout<<"B display"<<endl;
//		cout<<c<<" "<<d<<endl;
//	}
//};
//class C:virtual public A
//{
//	int e,f;
//public:
//	C()
//	{
//		cout<<"C constructer"<<endl;
//		e=10;
//		f=20;
//	}
//	void assign(int x,int y)
//	{
//		cout<<"C assign"<<endl;
//		e=x;
//		f=y;
//	}
//	void display()
//	{
//		cout<<"C display"<<endl;
//		cout<<e<<" "<<f<<endl;
//	}
//};
//class D: public B,public C
//{
//	int g,h;
//public:
//	D()
//	{
//		cout<<"D constructer"<<endl;
//		g=10;
//		h=20;
//	}
//	void assign(int x,int y)
//	{
//		cout<<"D assign"<<endl;
//		g=x;
//		h=y;
//	}
//	void display()
//	{
//		cout<<"D display"<<endl;
//		cout<<g<<" "<<h<<endl;
//	}
//};
//int main()
//{
//	D obj1;
//	B obj2;
//	A*pobj1=&obj1;
//	pobj1->assign(12,13);
//	pobj1->display();
//	pobj1=&obj2;
//	pobj1->display();
//}