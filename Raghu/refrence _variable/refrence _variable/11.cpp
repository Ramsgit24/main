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
	void assign(int a,int b)
	{
		x=a;
		y=b;
	}
	void disp()
	{
		cout<<x<<" "<<y<<endl;
	}
};
void fun(A tobj)
{
	tobj.assign(456,789);
}
int main()
{
	A obj2;
	fun(obj2);
	obj2.disp();

	//A &obj1=obj2;
	//obj1.disp();
	//obj2.assign(22,33);
	//obj2.disp();
}
