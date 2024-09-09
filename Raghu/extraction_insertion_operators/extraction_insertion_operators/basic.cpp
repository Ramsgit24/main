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
friend istream& operator >>(istream& in,A& tobj1);
friend ostream& operator <<(ostream& out,const A tobj2);
};
//istream& operator >>(istream& in,A& tobj1)
//{
//	in>>tobj1.x;
//	in>>tobj1.y;
//	return in;
//}
//ostream& operator <<(ostream& out,const A& tobj2)
//{
//	out<<tobj2.x<<endl;
//	out<<tobj2.y<<endl;
//	return out;
//}
istream& operator >>(istream& in,A& tobj1)
{
	in>>tobj1.x;
	in>>tobj1.y;
	return in;
}
ostream& operator <<(ostream& out,const A tobj2)
{
	out<<tobj2.x<<endl;
	out<<tobj2.y<<endl;
	return out;
}
int main()
{
	A obj1;
	cin>>obj1;
	cout<<obj1<<endl;
}