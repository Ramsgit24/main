#include<iostream>
using namespace std;

void add(int&,int&);
void sub(int&,int&);
void mul(int&,int&);
int main()
{
	int a,b;
	cout<<"enter A value:"<<endl;
	cin>>a;
	cout<<"enter B value:"<<endl;
	cin>>b;
	cout<<"A value is :"<<a<<endl<<"b value is:"<<b<<endl;
	add(a,b);
	cout<<"after add fun call A value is :"<<a<<endl<<" after add call B value is:"<<b<<endl;

	cout<<"A value is :"<<a<<endl<<"b value is:"<<b<<endl;
	sub(a,b);
	cout<<"after sub fun call A value is :"<<a<<endl<<" after sub call B value is:"<<b<<endl;

	cout<<"A value is :"<<a<<endl<<"b value is:"<<b<<endl;
	mul(a,b);
	cout<<"after mul fun call A value is :"<<a<<endl<<" after mul call B value is:"<<b<<endl;
	/*int &b=a;
	cout<<"A value is:"<<a<<" "<<b<<endl;
	b=300;
	cout<<"A value after is:"<<a<<" "<<b<<endl;
	cout<<sizeof(b)<<endl;*/
}

void add(int& x,int& y)//call by reference
{
	x=x+10;
	y=y+10;
}

void sub(int& x,int& y)
{
	x=x-10;
	y=y-10;
}

void mul(int& x,int& y)
{
	x=x*10;
	y=y*10;
}