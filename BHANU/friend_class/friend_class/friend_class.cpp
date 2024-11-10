#include<iostream>
using namespace std;
//class B;
class A
{
	int x,y;
public:
	void Adisplay();
	friend class B;
};
class B
{
	int p,q;
public:
	void Bdisplay();
	friend class A;
};
void A::Adisplay()
{
	B bb;
	bb.p=30;
	bb.q=40;
	cout<<bb.p<<" "<<bb.q<<endl;
}
void B::Bdisplay()
{
	A aa;
	aa.x=10;
	aa.y=20;
	cout<<aa.x<<" "<<aa.y<<endl;
}

int main()
{
	A obj;
	B obj1;
	obj1.Bdisplay();
	obj.Adisplay();
}