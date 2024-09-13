#include<stdio.h>
#include<iostream>
using namespace std;
int add()
{
	int a,b,c;
	cout<<"enter a and b values"<<endl;
	cin>>a;
	cin>>b;
	c=a+b;
	return c;
}
int main()
{
	int x;
	x=add();
	cout<<"addition value is"<<x<<endl;
}
