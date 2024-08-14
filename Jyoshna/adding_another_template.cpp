#include<iostream>
using namespace std;
template <class s>
s add(s a,s b);
template <class T,class p,class r>
T add(T a,p b,r c);
int main()
{
	int a=add<int>(10,20,30);
	float b=add<float>(23.4f,45.5f,34.2f);
	char c=add<char>('A','B','c');
	int d=add<float,int,int>(23.4f,45,34);
	int f=add(23,45);
	cout<<"addition value are "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<f<<endl;
}
template <class T,class p,class r>
T add(T a,p b,r c)
{
	T d;
	d=a+b+c;
	return d;
}
template <class s>
s add(s a, s b)
{
	s f;
	f=a+b;
	return f;
}
