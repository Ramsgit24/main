#include<iostream>
using namespace std;
template<typename T>
class smtptr
{                            //USER DEFINED SMARTPOINTER
	T* ptr;
public:
	smtptr(T* p=NULL)                          //T* operator ->()
		                                       // {
	{                                          //     return ptr;
		ptr=p;                                 //  }
	}
	T& operator *()
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
public:
	int x;
	int y;
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
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}

};
int main()
{
	smtptr<int> obj1(new int);
	smtptr<float>obj2(new float);
	*obj1=30;
	*obj2=30.6f;
	smtptr<A> obj3(new A);
	obj3->x=100;
}