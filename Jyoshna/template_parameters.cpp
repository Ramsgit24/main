#include<iostream>
using namespace std;
template <typename T,typename R,typename U>
class A
{
public:
	T x;
	R y;
	U z;
	A();
	T add(T,R,U);
	void assign(T,R,U);
	void display();
};
template<typename T,typename R,typename U>
A<T,R,U>::A()
{
	x=10;
	y=20;
	z=30;
}
template<typename T,typename R,typename U>
T A<T,R,U>::add(T a,R b,U v)
{
	T c;
	x=a;
	y=b;
	z=v;
	c=a+b+v;
	return c;
}
template<typename T,typename R,typename U>
void A<T,R,U>::assign(T a,R b,U v)
{
	x=a;
	y=b;
	z=v;
}
template<typename T,typename R,typename U>
void A<T,R,U>::display()
{
	cout<<x<<" "<<y<<" "<<z<<endl;
}
int main()
{
	A <int,float,int> obj1;
	int e=obj1.add(23,43.5f,67);
	A <float,int,float> obj2;
	float d=obj2.add(23.4f,43,45.5f);
	obj1.display();
	obj2.display();
	cout<<e<<" "<<d<<endl;
}