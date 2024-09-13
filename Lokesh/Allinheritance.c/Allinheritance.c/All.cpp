/*#include<iostream>                     single heritance:   A----B
using namespace std;
class A
{
	int x;
public:
	int y;
	void Aassign(int a,int b)
	{
		x=a;
		y=b;
	}
	void Adisplay()
	{
		cout<<x<<" "<<y<<endl;
	}
};
class B:public A
{
	int p;
	int q;
public:
	void Bassign(int a,int b)
	{
		p=a;
		q=b;
	}
	void Bdisplay()
	{
		cout<<p<<" "<<q<<endl;
	}
};
int main()
{
	B obj2;
	//obj2.x=11;
	obj2.Adisplay();
	
	
}*/

                                              //multi Inheritance : A---B---C
#include<iostream>
using namespace std;
class A
{
	public:
	int x;
	int y;
	void Aassign(int a,int b)
	{
		x=a;
		y=b;
	}
	void Adisplay()
	{
		cout<<"x= :"<<x<<"y=:"<<y<<endl;
	}
};
class B:public A
{
	public:
	int p;
	int q;
	void Bassign(int a,int b)
	{
		p=a;
		q=b;
	}
	void Bdisplay()
	{
		cout<<"p= "<<p<<"q= "<<q<<endl;
	}
};
class C:public B
{
	public:
	int a1;
	int b1;
	void Cassign(int a,int b)
	{
		a1=a;
		b1=b;
	}
     void Cdisplay()
	 {
		 cout<<"a1= "<<a1<<" "<<"b1= "<<b1<<endl;
	 }
};
int main()
{
	A O1;
	B O2;
	C O3;
	O1.Aassign(22,33);
	O1.Adisplay();
	O2.Bassign(44,55);
	O2.Bdisplay();
	O3.Cassign(66,77);
	O3.Cdisplay();
	O3.x=11;
	O3.y=12;
    O3.Adisplay();
}

