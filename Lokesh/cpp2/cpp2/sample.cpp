#include<iostream>
using namespace std;
void add();
int main()
{
	add();
	
}
void add()
{
	int a,b,c;
	cout<<"enter a,b values :"<<endl;
	cin>>a;
	cin>>b;
	c=a+b;
	cout<<"Addition "<<a<<" and "<<b<<" is :"<<c<<endl;
}