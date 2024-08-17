// Addition Float.cpp : main project file.

#include "stdafx.h"
#include<iostream>


using namespace std;
/*int add1(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
float add2(float x,float y)
{
	float z;
	z=x+y;
	return z;
}

int main()
{
   int a,b,c;
   float p,q,r;
   cout<<"enter a inter number"<<endl;
   cin>>a;
   cin>>b;
   c=add1(a,b);
   cout<<"values"<<c<<endl;
   cout<<"enterr float"<<endl;
   cin>>p;
   cin>>q;
   r=add2(p,q);
   cout<<"values"<<r<<endl;
}
struct emp
{
	int id;
	float sal;
	char dep;
	
	void assign(int x,float y, char z)
	{
		id=x;
		sal=y;
		dep=z;
	}
	void display()
	{
		cout<<"id:"<<id<<"salary:"<<sal<<" dep:"<<dep<<endl;

	}
};
int main()
{
	struct emp e1;
	struct emp e2;
	e1.assign(23,342.4,'d');
	e1.display();
	e2=e1;
	e2.display();
	e1.id=33;
	e1.display();
	e2.display();
}*/
struct emp
{
	int id;
	float sal;
	char dep;

	void assign(int x,float y,char z);
	void display();
};
void emp::assign(int x,float y,char z)
{
	id=x;
	sal=y;
	dep=z;
}
void emp::display()
{
	cout<<id<<" "<<sal<<" "<<dep<<" "<<endl;
}
int main()
{
	struct emp e1,e2;
	e1.assign(12,333.4,'g');
	e2.id=123;
	e1.sal=486.3f;
	e2.dep='A';
	e1.display();
	e2.display();
}


