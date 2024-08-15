//#include<iostream>
//using namespace std;
//class A
//{
//	int x;
//	int y;
//public:
//class B	
//{
//	int p;
//	int q;
//	public:
//B()
//	{
//	cout<<"B const"<<endl;
//	p=30;
//	q=40;
//	}
//void assign(int a,int b)
//	{
//	cout<<"B assign"<<endl;
//	p=a;
//	q=b;
//	}
//void disp()
//
//	{
//	A obj1;
//	cout<<"B disp "<<endl;
//	cout<<p<<" "<<q<<endl;
//	obj1.x=111;
//	obj1.y=444;
//	}
//
//};
//	A()
//	{
//	cout<<"A const"<<endl;
//	x=10;
//	y=20;
//	}
//void assign(int a,int b)
//	{
//	cout<<"A assign"<<endl;
//	x=a;
//	y=b;
//	}
//void disp()
//	{
//	cout<<"A disp"<<endl;
//	cout<<x<<" "<<y<<endl;
//	B obj2;
//	//obj2.p=888;
//	}
//};
//int main()
//{
//	A::B obj1;
//	obj1.assign(11,22);
//	obj1.disp();
//	A obj2;
//	obj2.assign(33,44);
//	obj2.disp();
//
//}