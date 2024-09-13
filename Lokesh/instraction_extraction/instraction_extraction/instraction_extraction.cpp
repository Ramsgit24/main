#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		x=10;
		y=20;
	}
	friend istream& operator >>(istream& in,A);
	friend ostream operator <<(ostream& out,const A );
};
istream& operator >>(istream& in,A obj)
{
	in>>toobj.x;
	in>>toobj.y;
	return in;
}
ostream operator <<(ostream& out,const A obj1)
{
	out<<toobj;
	out<<toobj1;
	return out;
}
int main()
{
	A obj;
	cin>>obj;
	cout<<obj;
}