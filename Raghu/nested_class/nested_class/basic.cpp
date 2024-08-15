//#include<iostream>
//using namespace std;
//class A
//{
//	int x;
//	int y;
//public:
//	class B
//	{
//		
//		int p;
//		int q;
//	public:
//		B()
//		{
//			cout<<"B const"<<endl;
//			p=30;
//			q=40;
//		}
//		void assignB(int a,int b)
//		{
//			cout<<"B assign"<<endl;
//			p=a;
//			q=b;
//		}
//		void dispB()
//
//		{
//			cout<<"B disp "<<endl;
//
//			cout<<p<<" "<<q<<endl;
//		}
//		
//	};
//	A()
//	{
//		cout<<"A const"<<endl;
//		x=10;
//		y=20;
//	}
//	void assignA(int a,int b)
//	{
//		cout<<"A assign"<<endl;
//		x=a;
//		y=b;
//	}
//	void dispA()
//	{
//		cout<<"A disp"<<endl;
//		cout<<x<<" "<<y<<endl;
//	}
//};
//int main()
//{
//	A::B obj1;
//	obj1.assignB(11,22);
//	obj1.dispB();
//	A obj2;
//	obj2.assignA(33,44);
//	obj2.dispA();
//	
//}