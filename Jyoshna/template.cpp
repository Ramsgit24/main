#include<iostream>
using namespace std;
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
	A <int,float> obj1;
	A <float,int> obj2;
	obj2.assign(23.4f,45.6f);
	int e=obj1.add(23,45);
	float d=obj2.add(23.4f,23.6f);
	obj2.display();
	cout<<d<<" "<<e<<endl;
	obj1.display();
}

	