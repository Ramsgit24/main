#include<iostream>
using namespace std;

/*template <typename T>
class A
{
	T x,y;
public:
	A();
	T add(T a,T b);
	void assign(T a,T b);
	void disp();
	
};
template <typename T>
A<T>::A()
	{
		x=10;
		y=20;
	}
template <typename T>
T A<T>::add(T a,T b)
	{
		T c;
		x=a;
		y=b;

		c=a+b;
		return c;
		
	}
template <typename T>
void A<T>::assign(T a,T b)
	{
		x=a;
		y=b;
	}
template <typename T>
void A<T>:: disp()
	{
		cout<<x<<" "<<y<<endl;
	}

int main()
{
	A<int> obj1;

	A<float> obj2;

	obj2.assign(11,22);

	float b=obj2.add(33,44.7);

	obj2.disp();

	cout<<"additon is : "<<b<<endl;
}*/
template <typename T,typename P>
class A
{
	T x,y;
public:
	A();
	T add(T a,T b);
	void assign(T a,T b);
	void disp();
	
};
template <typename T,typename P>
A<T,P>::A()
	{
		x=10;
		y=20;
	}
template <typename T,typename P>
T A<T,P>::add(T a,T b)
	{
		T c;
		x=a;
		y=b;

		c=a+b;
		return c;
		
	}
template <typename T,typename P>
void A<T,P>::assign(T a,T b)
	{
		x=a;
		y=b;
	}
template <typename T,typename P>
void A<T,P>:: disp()
	{
		cout<<x<<" "<<y<<endl;
	}

int main()
{
	A<int,float> obj1;

	A<float,int> obj2;

	obj2.assign(11,22);

	float b=obj2.add(33,44);

	obj2.disp();

	cout<<"additon is : "<<b<<endl;
}