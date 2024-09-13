#include<iostream>
using namespace std;
/*class loki
{
public:
	int x;
	int y;
	loki()
	{
		x=20;
		y=30;
	}
	void check()
	{
		x=111;
		y=222;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
};
loki abc(loki toobj1)
{
	toobj1.x=123;
	toobj1.y=223;
	return toobj1;
}
int main()
{
	loki obj1;
	obj1.display();
	loki obj2=abc(obj1);
	obj2.display();
}*/


/*
class A
{
public:
	int x;
	int y;
	A()
	{
		x=10;
		y=20;
	}
	void check()
	{
		x=1111;
		y=2222;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
	A show(A toobj1)

	{
		toobj1.x=120;
		toobj1.y=121;
		x=33;
		y=44;
		return toobj1;
	}
};
int main()
{
	A obj1;
	obj1.display();
	obj1.check();
	A obj2=obj1.show(obj1);
	obj1.display();
	obj2.display();
}*/


//funtion overriding (same name and same paramters )
 /*class A
 {
 public:
	 int x;
	 int y;
	 A()
	 {
		 x=11;
		 y=12;
	 }
	 void display()
	 {
		 cout<<"A overriding"<<endl;
		 cout<<x<<" "<<y<<endl;
	 }
	 void assign(int a,int b)
	 {
       x=a;
	   y=b;
	 }
 };
 class B:public A
 {
 public:
   int p;
   int q;
   B()
   {
	   p=30;
	   q=40;
   }
  void display()
   {
	   cout<<"B overriding"<<endl;
	   cout<<p<<" "<<q<<endl;
	   }


   void assign(int a,int b)
   {
     p=a;
	 q=b;
   }
 };
 int main()
 {
	 A obj;
	 obj.assign(111,222);
	 obj.display();
	 B obj1;
	 obj1.assign(22,33);
	 obj1.display();
 }*/



/*
class A
 {
 public:
	 int x;
	 int y;
	 A()
	 {
		 x=11;
		 y=12;
	 }
	 void display()
	 {
		 cout<<"A overriding"<<endl;
		 cout<<x<<" "<<y<<endl;
	 }
	 void assign(int a,int b)
	 {
       x=a;
	   y=b;
	 }
 };
 class B:public A
 {
 public:
   int p;
   int q;
   B()
   {
	   p=30;
	   q=40;
   }
  void display()
   {
	   cout<<"B overriding"<<endl;
	   cout<<p<<" "<<q<<endl;
	   }


   void assign(int a,int b)
   {
     p=a;
	 q=b;
   }
 };
 class C:public B
 {
 public:
	 int w;
	 int e;
	 C()
	 {
		 w=20;
		 e=30;
	 }
	 void display()
	 {
		 cout<<"C overiding"<<endl;
		 cout<<w<<" "<<e<<endl;
	 }
	 void assign(int a,int b)
	 {
       w=a;
	   e=b;
	 }
 };
 int main()
 {
	 A obj;
	 obj.assign(111,222);
	 obj.display();
	 B obj1;
	 obj1.assign(22,33);
	 obj1.display();
	 C obj2;
	 obj2.assign(222222,444444);
	 obj2.display();
 }
 */



