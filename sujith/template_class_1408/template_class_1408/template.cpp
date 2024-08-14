// if we have template and function with same signature then complier calls function
// sometimes depeding on compiler ambiguity occurs.
#include<iostream>
using namespace std;
class A
{
	int x,y;
public:
	A()
	{
		x=10;
		y=20;
	}
	template<typename T,typename R>
	T add (T a,R b)
	{
		T c;
		c=a+b;
		return c;
	}
	template<typename T>
	T add (T a,T b)
	{
		T c;
		c=a+b;
		return c;
	}
	double add(int a,double b)
	{
		double c=a+b;
		return c;
	}
};
template<typename T>
class B
{
	T p,q;
public:
	B();
	T add(T a,T b);
	void assign(T a,T b);
	void display();
};
template<typename T,typename R>
class C
{
	T p;
	R q;
public:
	C();
	T add(T a,R b);
	void assign(T a,T b);
	void display();
};
int main()
{
	A obj1;
	float a=obj1.add(10,10.32f);
	cout<<"a value is "<<a<<endl;
	B<int> obj2;
	B<float>obj3;
	obj2.assign(10,20);
	obj2.add(11,22);
	obj2.display();
	float d=obj3.add(33,44);
	obj3.display();
	cout<<"d value is "<<d<<endl;
	C<int,float>obj4;
	obj4.assign(10,20);
	obj4.display();
}
template<typename T>
B<T>::B()
{
	p=20;
	q=30;
}
template<typename T>
T B<T>::add(T a,T b)
{
	p=a;
	q=b;
	return p+q;
}
template<typename T>
void B<T>::assign(T a,T b)
{
	p=a;
	q=b;
}
template<typename T>
void B<T>::display()
{
	cout<<p<<" "<<q<<endl;
}
template<typename T,typename R>
C<T,R>::C()
{
	p=20;
	q=30;
}
template<typename T,typename R>
T C<T,R>::add(T a,R b)
{
	p=a;
	q=b;
	return p+q;
}
template<typename T,typename R>
void C<T,R>::assign(T a,T b)
{
	p=a;
	q=b;
}
template<typename T,typename R>
void C<T,R>::display()
{
	cout<<p<<" "<<q<<endl;
}