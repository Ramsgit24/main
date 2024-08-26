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
//	virtual void assign(int x,int y)=0;
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
//int main()
//{
//	B obj;
//	A* obj1=&obj;
//	obj1->assign(1,2);
//	obj1->display();
//}