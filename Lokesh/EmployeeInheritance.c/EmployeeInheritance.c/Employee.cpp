#include<iostream>
using namespace std;
//const int AABB = 80;
class A
{
	int id;
	float sal;
public:
	A()
	{
		cout<<"A constructor"<<endl;
		id=12;
		sal=22.3f;
	}
	void Adisplay()
	{
	cout<<id<<" "<<sal<<endl;
	}
};
class B:public A
{
	char name;
	char sex;
public:
	B()
	{
		cout<<"B constructor"<<endl;
		name='N';
		sex='M';
	}
	void Bdisplay()
	{
		cout<<name<<" "<<sex<<endl;
	}
};
class C:public B
{
	char edu;
	int age;
	//char colour[50];
public:
	C()
	{
		cout<<"C constructor"<<endl;
		edu='M';
		age=25;
		//colour[50]="white";
	}
	void Cdisplay()
	{
		cout<<edu<<" "<<age<<" "<<endl;
	}
};
int main()
{
	A a1;
	B b1;
	C c1;
	a1.Adisplay();
	b1.Bdisplay();
	c1.Cdisplay();
}
