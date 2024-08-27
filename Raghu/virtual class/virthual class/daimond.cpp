//#include<iostream>
//using namespace std;
//class A
//{
//	int a;
//	int b;
//public:
//	A()
//	{
//		cout<<"A constr"<<endl;//(not use the virtual inheritance in a diamondprabolem give a ambgitive error)
//		a=10;
//		b=20;
//	}
//	void assign(int x,int y)
//	{
//		cout<<"A assign"<<endl;
//		a=x;
//		b=y;
//	}
//	void disp()
//	{
//		cout<<a<<" "<<b<<endl;
//	}
//};//(solving the daimond prabolem in a virtual inheritance)
//class B: public A//( using virtual inheitence creat supatre memory)
//{
//	int c;
//	int d;
//public:
//	B()
//	{
//		cout<<"B constr"<<endl;
//		c=10;
//		d=20;
//	}
//	void assign(int x,int y)
//	{
//		cout<<"B assign"<<endl;
//		c=x;
//		d=y;
//	}
//	void disp()
//	{
//		cout<<c<<" "<<d<<endl;
//	}
//};
//class C:virtual public A
//{
//	int e;
//	int f;
//public:
//	C()
//	{
//		cout<<"C constr"<<endl;
//		e=10;
//		f=20;
//	}
//	void assign(int x,int y)
//	{
//		cout<<"C assign"<<endl;
//		e=x;
//		f=y;
//	}
//	void disp()
//	{
//		cout<<e<<" "<<f<<endl;
//	}
//};
//class D:public B,public C
//{
//	int g;
//	int h;
//public:
//	D()
//	{
//		cout<<"D constr"<<endl;
//		g=10;
//		h=20;
//	}
//	void assign(int x,int y)
//	{
//		cout<<"D assign"<<endl;
//		g=x;
//		h=y;
//	}
//	void disp()
//	{
//		cout<<g<<" "<<h<<endl;
//	}
//};
//int main()
//{
//	//
//	A obj1;
//	//B obj2;
//	//C obj3;
//	D obj4;
//	//A* pobj1=&obj4;
//	//B* pobj2=&obj4;
//	//C* pobj3=&obj4;
//	//D* pobj4=&obj4;
//}
