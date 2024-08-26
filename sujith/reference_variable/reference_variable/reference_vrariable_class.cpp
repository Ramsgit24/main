#include<iostream>
using namespace std;
class A
{
	int a,b;
	int&d;
	int&c;
public:
	A():d(b),c(a)
	{
		cout<<"A constructor"<<endl;
		a=1
			
			
			0;
		b=20;

	}
	void assign(int x,int y)
	{
		c=x;
		d=y;
		cout<<"A assign"<<endl;
	}
	void display()
	{
		cout<<"A display"<<endl;
		cout<<a<<" "<<b<<endl;
		cout<<&a<<" "<<&b<<" "<<&c<<" "<<&d<<endl;
	}

};
void fun(A tobj)
{
	tobj.assign(456,789);
}
int main()
{
	A obj1;
	fun(obj1);
	obj1.display();


}