#include<iostream>
using namespace std;
template <typename S>
class B
{
public:
	S p;
	S q;
	B();
	S add(S,S);
	void assign(S,S);
    void display();
};
template <typename T,typename R>
class A
{
public:
	T x;
	T y;
	A();
	T add(T,T);
	void assign(T,T);
	void display();
};
template<typename S>
B<S>::B()
{
	p=30;
	q=40;
}
template<typename S>
S B<S>::add(S a,S b)
{
	S f;
	p=a;
	q=b;
	f=a+b;
	return f;
}
template<typename S>
void B<S>::assign(S a,S b)
{
	p=a;
	q=b;
}
template<typename S>
void B<S>::display()
{
	cout<<p<<" "<<q<<endl;
}
template<typename T,typename R>
A<T,R>::A()
{
	x=10;
	y=20;
}
template<typename T,typename R>
T A<T,R>::add(T a,T b)
{
	T c;
	x=a;
	y=b;
	c=a+b;
	return c;
}
template<typename T,typename R>
void A<T,R>::assign(T a,T b)
{
	x=a;
	y=b;
}
template<typename T,typename R>
void A<T,R>::display()
{
	cout<<x<<" "<<y<<endl;
}
int main()
{
	B <int> obj;
	int i=obj.add(23,13);
	B <float> obj3;
	float j=obj3.add(11,10);
	A <int,float> obj1;
	int e=obj1.add(23,45);
	A <float,int> obj2;
	float d=obj2.add(23.4f,23.6f);
	obj.display();
	obj3.display();
	obj1.display();
	obj2.display();
	cout<<i<<" "<<j<<" "<<e<<" "<<d<<endl;
}