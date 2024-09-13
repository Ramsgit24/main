
#include<iostream>
using namespace std;

template<typename T>
class smtptr
{
	T* ptr;
public:
	smtptr(T* p=NULL)
	{
		ptr=p;
	}

	T& operator*()
	{
		return *ptr;
	}
	T* operator->()
	{
		return ptr;
	}
};

class A
{
	int x,y;
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
int main()
{
	smtptr<int> obj(new int);
	smtptr<float> obj1(new float);

	smtptr<A> obj2(new A);

	*obj=40;
	*obj1=33.66f;
	cout<<*obj<<" "<<*obj1<<endl;
	obj2->disp();
}