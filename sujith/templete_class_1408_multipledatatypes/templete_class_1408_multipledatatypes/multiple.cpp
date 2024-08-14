#include<iostream>
using namespace std;
template<typename P,typename Q,typename R,typename S>
class A
{
	P x;
	Q y;
	R z;
	S w;
public:
	A(){}
	A(P a,Q b,R c,S d);
	void assign(P a,Q b,R c,S d);
	void display();
};
template<typename P,typename Q,typename R,typename S>
A<P,Q,R,S>::A(P a, Q b, R c, S d)
{
	x=a;
	y=b;
	z=c;
	w=d;
	
}
template<typename P,typename Q,typename R,typename S>
void A<P,Q,R,S>::assign(P a, Q b, R c, S d)
{
	x=a;
	y=b;
	z=c;
	w=d;
}
template<typename P,typename Q,typename R,typename S>
void A<P,Q,R,S>::display()
{
	cout<<x<<" "<<y<<" "<<z<<" "<<w<<endl;
}
int main()
{
	A<int,float,char,double>obj1;
	obj1.assign(11,23.34f,'d',23.34);
	//obj1.add(11,23.34f,'d',23.34);
	obj1.display();
}