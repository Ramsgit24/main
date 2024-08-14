#include<iostream>
using namespace std;

template <typename T>
T add(T a,T b);

template <typename P,typename R>
P add(P a,R b);

template <typename R,typename P,typename S>
R add(R a,P b, S c);

int main()
{
	//int a=add<int>(10,200);
	float b=add<float>(20.3f,20.5f);
	char c=add<char>('A','c');
	cout<<"Addition of same parameter values are "<<add<int>(10,20)<<" "<<b<<" "<<(int)c<<endl;

	float d=add<float,int>(10.5f,20);
	cout<<"addition of two diff parameters is : "<<d<<endl;

	float f=add<float,int,double>(10.3f,100,10.2);

	float
	cout<<"addition of three diff parameters is : "<<f<<endl;
}
template <typename T>//for definition also we need to use template
T add(T a,T b)
{
	T c;
	c=a+b;
	return c;
}

template <typename P,typename R>
P add(P a,R b)
{
	P c;
	c=a+b;
	return c;
}

template <typename R,typename P,typename S>
R add(R a,P b, S c)
{
	R d;
	d=a+b+c;
	return d;
}
