#include<iostream>
using namespace std;
template<typename T,typename R>
class A
{
	T a;
	R b;
public:
	A();
	T add(T,R);
	void assign(T,R);
	void disp();
}
template<typename T,typename R>
A<T,R>::A()
{
	a=10;
	b=20;
}
template<typename T,typename R>
T A<T,R>::add(T x,R y)
{
	T c;
	a=x;
	b=y;
	c=x+y;
	return c;
}
template<typename T,typename R>
void A<T,R>::assign(T x,R y)
{
	a=x;
	b=y;
}
template<typename T,typename R>
void A<T,R>::disp()
{
	cout<<a<<" "<<b<<endl;
}
int main()
{
	A<int,int> obj1;
	A<float,int> obj2;
	obj2.assign(11,22);
	int a=obj2.add(33,44);
	obj2.disp();
	cout<<a<<endl;
	obj1.assign(55,66);
	obj1.disp();
}