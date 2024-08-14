#include<iostream>
using namespace std;
template <typename t>
t add(t a, t b);
template <typename p,typename r>
p add(p a, r b);
template <typename q,typename r,typename s>
q add(q a, r b, s c);
int main()
{
	int a=add(10,20);
	float b=add(10.1f,20.2f);
	char c=add('A','B');
	int d=add(10,10.5f);
	float z=add(10.2f,20,30);
	cout<<"the addition values are "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<z<<endl;
}
template <typename t>
t add(t a, t b)
{
	t c;
	c=a+b;
	return c;
}
template <typename p, typename r>
p add(p a, r b)
{
	p c;
	c=a+b;
	return c;
}
template <typename q, typename r,typename s>
q add(q a, r b,s c)
{
	q z;
	z=a+b+c;
	return z;
}