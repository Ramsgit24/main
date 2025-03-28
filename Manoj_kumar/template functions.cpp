//#include<iostream>
//using namespace std;
//
//template<typename A,typename B>
//B add(A a,B b)
//{
//	B c;
//	c=a+b;
//	return c;
//}
//int main()
//{
//	int A=add<int,int>(10,20);
//	cout<<A<<endl;
//	float B=add<float,float>(11.2f,12.3f);
//	cout<<B<<endl;
//	float C=add<int,float>(11,23.5f);
//	cout<<C<<endl;
//}


#include<iostream>
using namespace std;

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
	int add(int a,int b)
	{
		int c;
		c=a+b;
		return c;
	}
	template<typename A,typename B>
	A add(A a,B b)
	{
		A c;
		c=a+b;
		return c;
	}
};
int main()
{
	A obj;
	int a=obj.add<int,int>(10,20);
	cout<<a<<endl;
	float b=obj.add<int,float>(12,23.5f);
	cout<<b<<endl;
	int c=obj.add<float,int>(12.3f,56);
	cout<<c<<endl;
	int d=obj.add(10,30);
	cout<<d<<endl;
}

#include<iostream>
using namespace std;
template<typename A,typename B>
class C
{
  public:
  A x;
  B y;
  C();
  A add(A,B);
  void assign(A,B);
  void display();
};
template<typename A,typename B>
C <A,B>::C()
{
    x=10;
    y=20;
}
template<typename A,typename B>
A C<A,B>::add(A a1,B b1)
{
    A c;
    c=a1+b1;
    return c;
}
template<typename A,typename B>
void C<A,B>::assign( A a1, B b1)
{
    x=a1;
    y=b1;
}
template<typename A,typename B>
void C<A,B>::display()
{
    cout<<x<<y<<endl;
}

int main()
{
    C<int,int>obj;
    obj.assign(10,22);
    obj.display();
}
