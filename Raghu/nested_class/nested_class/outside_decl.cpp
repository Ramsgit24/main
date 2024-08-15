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
//		B();
//		void assign(int,int);
//		void disp();
//	};
//	A();
//	void assign(int,int);
//	void disp();
//};
//A::B::B()
//{
//	  cout<<"B const"<<endl;
//	  p=30;
//	  q=40;
//}
//void A::B::assign(int a,int b)
//  {
//	  cout<<"B assign"<<endl;
//	  p=a;
//	  q=b;
//  }
//void A::B::disp()
//  {
//	  cout<<"B disp "<<endl;
//
//	  cout<<p<<" "<<q<<endl;
//  }
//  A::A()
//  {
//	  cout<<"A const"<<endl;
//	  x=10;
//	  y=20;
//  }
//  void A::assign(int a,int b)
//  {
//	  cout<<"A assign"<<endl;
//	  x=a;
//	  y=b;
//  }
//  void A::disp()
//  {
//	  cout<<"A disp"<<endl;
//	  cout<<x<<" "<<y<<endl;
//  }
//  int main()
//  {
//	  A::B obj1;
//	  obj1.assign(11,22);
//	  obj1.disp();
//	  A obj2;
//	  obj2.assign(33,44);
//	  obj2.disp();
//
//  }
