#include<iostream>
using namespace std;
int add()
{
	int a,b,c;
	cout<<"enter a variables"<<endl;
	cin>>a;
	cin>>b;
	c=a+b;
	return c;
}
int main()
{
	int x;
	x=add();
	cout<<"vales"<<x<<endl;
}