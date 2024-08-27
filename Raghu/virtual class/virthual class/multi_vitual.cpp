//#include<iostream>
//using namespace std;
//class A
//{
//	int x;
//	int y;
//public:
//	A()
//	{
//		x=10;
//		y=20;
//	}
//	virtual void assign(int a,int b)
//	{
//		cout<<"A assign"<<endl;
//		x=a;
//		y=b;
//	}
//	void disp()
//	{
//		cout<<"A disp"<<endl;
//		cout<<x<<" "<<y<<endl;
//	}
//};
//class B:public A
//{
//	int p;
//	int q;
//public:
//	B()
//	{
//		p=10;
//		q=20;
//	}
//	virtual void assign(int a,int b)
//	{
//		cout<<"B assign"<<endl;
//		p=a;
//		q=b;
//	}
//	void disp()
//	{
//		cout<<p<<" "<<q<<endl;
//		cout<<"B disp"<<endl;
//	}
//};
//class C:public B
//{
//	int r;
//	int s;
//public:
//	C()
//	{
//		r=10;
//		s=20;
//	}
//	virtual  void assign(int a,int b)
//	{
//		cout<<"C assign"<<endl;
//		r=a;
//		s=b;
//	}
//	void disp()
//	{
//		cout<<r<<" "<<s<<endl;
//		cout<<"C disp"<<endl;
//	}
//};
//int main()
//{
//	A obj1;
//	B obj2;
//	C obj3;
//	A* pobj1=&obj3;
//	B* pobj2=&obj3;
//	C* pobj3=&obj3;
//	pobj1->assign(11,22);
//	pobj1->disp();
//	cout<<sizeof(A)<<endl;
//
//	pobj2->assign(33,44);
//	pobj2->disp();
//	cout<<sizeof(B)<<endl;
//
//	pobj3->assign(55,66);
//	pobj3->disp();
//	cout<<sizeof(C)<<endl;
//}