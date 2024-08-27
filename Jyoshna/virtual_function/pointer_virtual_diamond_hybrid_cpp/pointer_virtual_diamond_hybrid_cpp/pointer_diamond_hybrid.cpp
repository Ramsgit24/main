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
	//optional//virtual void assign(int a,int b)
	void assign(int a,int b)
	{
		x=a;
		y=b;
		cout<<"A assign"<<endl;
	}
	void display()
	{
		cout<<" A display"<<endl;
		cout<<x<<" "<<y<<endl;
	}
};
class B:virtual public A
{
	int p;
	int q;
public:
	B()
	{
		p=30;
		q=40;
	}
	void assign(int a,int b)
	{
		p=a;
		q=b;
		cout<<"B assign"<<endl;
	}
	void display()
	{
		cout<<" B display"<<endl;
		cout<<p<<" "<<q<<endl;
	}
};
class C:virtual public A
{
	int r;
	int s;
public:
	C()
	{
		r=50;
		s=60;
	}
	/*virtual void assign(int a,int b)*/
	void assign(int a,int b)
	{
		r=a;
		s=b;
		cout<<"C assign"<<endl;
	}
	void display()
	{
		cout<<" C display"<<endl;
		cout<<r<<" "<<s<<endl;
	}
};
class D:public B,public C
{
	int m;
	int n;
public:
	D()
	{
		m=50;
		n=60;
	}
	void assign(int a,int b)
	{
		m=a;
		n=b;
		cout<<"D assign"<<endl;
	}
	void display()
	{
		cout<<" D display"<<endl;
		cout<<m<<" "<<n<<endl;
	}
};
int main()
{
	A obj1;
	B obj2;
	C obj3;
	D obj4;
	/*obj4.Aassign(11,22);
	obj4.Adisplay();*/
	A*pobj1=&obj4;
	A*pobj2=&obj3;
	A*pobj6=&obj2;
	B*pobj7=&obj4;
	C*pobj3=&obj4;
	D*pobj4=&obj4;
	pobj1->assign(11,22);
	pobj1->display();
	pobj2->assign(33,44);
	pobj2->display();
	pobj3->assign(55,66);
	pobj3->display();
	pobj4->assign(77,88);
	pobj4->display();
	pobj6->assign(77,88);
	pobj6->display();
	pobj7->assign(77,88);
	pobj7->display();
	cout<<sizeof(D)<<endl;
}


