#include<iostream>
using namespace std;
class A
{
	
	int x,y;
public:
	A()
	{
		x=10;
		y=20;
	}

	virtual	void assign(int a,int b)
	{
		cout<<"A assign"<<endl;
		x=a;
		y=b;
	}
	 void display()
	{
		cout<<"A display"<<endl;
		cout<<x<<" "<<y<<endl;
	}
};
class B:public A
{
	int p,q;
public:
	B()
	{
		p=30;
		q=40;
	}
private:
	void assign(int a,int b)
	{
		cout<<"B assign"<<endl;
		p=a;
		q=b;
	}
public:
	void display()
	{
		cout<<"B display"<<endl;
		cout<<p<<" "<<q<<endl;
	}
};
class C:public B
{
	int m,n;
public:
	C()
	{
		m=50;
		n=60;
	}

	void assign(int a,int b)
	{
		cout<<"C assign"<<endl;
		m=a;
		n=b;
	}
	void display()
	{
		cout<<"C display"<<endl;
		cout<<m<<" "<<n<<endl;
	}
};
int main()
{
	B obj1;
	A*pobj1=&obj1;
	pobj1->assign(11,22);
	pobj1->display();
	cout<<"size of each class are: ";
	cout<<sizeof(A)<<" "<<sizeof(B)<<endl;
	C obj2;
	pobj1=&obj2;
	pobj1->assign(11,22);
	pobj1->display();
	C*pobj2=&obj2;
	pobj2->assign(11,22);
	pobj2->display();


}