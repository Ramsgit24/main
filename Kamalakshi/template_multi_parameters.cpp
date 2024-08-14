#include<iostream>
using namespace std;
template <typename p,typename q,typename r>
class A
{
public:
	p x,y,z;
	A();
    p add(p,q,r);
	void assign(p,q,r);
	void display();
};
template <typename p,typename q,typename r>
A<p,q,r>::A()
{
	x=10;
	y=20;
	z=30;
}
template <typename p,typename q,typename r>
p A<p,q,r>::add(p a,q b,r c)
{
	p d;
	x=a;
	y=b;
	z=c;
	d=a+b+c;
	return d;
}
template <typename p,typename q,typename r>
void A<p,q,r>::assign(p a,q b,r c)
{
	x=a;
	y=b;
	z=c;
}
template <typename p,typename q,typename r>
void A<p,q,r>::display()
{
	cout<<x<<" "<<y<<" "<<z<<endl;
}
int main()
{
  A<float,int,float>obj;
  float k=obj.add(10.1f,20,30.1f);
  obj.assign(1,2,3);
  obj.display();
  cout<<"addition value is "<<k<<endl;
}