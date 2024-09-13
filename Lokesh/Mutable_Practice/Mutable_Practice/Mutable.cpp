#include "Mutable.h"
A::A()
{
	x=20;
	y=30;
}
void A::update(int a,int b)const
{
  x=a;
  y=b;
}
void A::display()const
{
	cout<<x<<" "<<y<<endl;
}