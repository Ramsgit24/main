#include<iostream>
using namespace std;
int add(int,int);
int sub(int,int);
int mul(int,int);
int* add(int*,int*);
int* sub(int*,int*);
int* mul(int*,int*);
void main()
{
	int a,b;
	cout<<"enter two values"<<endl;
	cin>>a;
	cin>>b;
	cout<<"****call by value******"<<endl;
	a=add(a,b);
	cout<<a<<" "<<b<<endl;
	a=sub(a,b);
	cout<<a<<" "<<b<<endl;
	a=mul(a,b);
	cout<<a<<" "<<b<<endl;
	cout<<"================="<<endl;
	cout<<"****call by adress******"<<endl;
	int*p=add(&a,&b);
	cout<<a<<" "<<b<<endl;
	cout<<*p<<endl;
	p=sub(&a,&b);
	cout<<a<<" "<<b<<endl;
	cout<<*p<<endl;
	p=mul(&a,&b);
	cout<<a<<" "<<b<<endl;
	cout<<*p<<endl;
}
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int* add(int* x,int* y)
{
	*x+=*y;
	return x;
}
int* sub(int* x,int* y)
{
	*x-=*y;
	return x;
}
int* mul(int* x,int* y)
{
	*x*=*y;
	return x;
}