#include<iostream>
using namespace std;
int mul(int a,int b)
{
	int c;
	c=a*b;
    return c;
}
int sub(int d,int e)
{
	int f;
	f=d-e;
	return f;
};
int main()
{
	int a,b,c;
	int d,e,f;
	cout<<"enter a and b values"<<endl;
	cin>>a;
	cin>>b;
	c=mul(a,b);
	cout<<"the multiplication value is"<<c<<endl;

	cout<<"enter d and e values"<<endl;
	cin>>d;
	cin>>e;
	f=sub(d,e);
	cout<<"the subtraction value is"<<f<<endl;
}





