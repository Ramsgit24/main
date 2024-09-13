#include<iostream>
using namespace std;

class B
{
	int p;
	int q;
public:
	void assign(int,int);
	void display();
	void check();
	friend class A;

};
class A
{
	int x;
	int y;
public:
	void assign(int,int);
	void display();
	friend class B;
};

void A::assign(int a,int b)
{
	x=a;
	y=b;
}
void A::display()
{
	B F;
	F.p=57;
	F.q=59;
	cout<<x<<" "<<y<<endl;

	cout<<F.p<<" "<<F.q<<endl;
}
void B::assign(int e,int r)
{
	p=e;
	q=r;
}
void B::display()
{
	A s;
	s.x=66;
	s.y=55;

	cout<<s.x<<" "<<s.y<<endl;
}
void B::check()
{
	A O;
	O.x=11;
	O.y=12;
	O.display();
}
int main()
{
	B w;
	w.check();
	w.assign(44,55);
	w.display();

}