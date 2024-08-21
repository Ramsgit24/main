#include<iostream>
using namespace std;
struct emp
{
	int id;
	char sec;
	float sal;
	void assign(int a,char b,float c)
	{
		id=a;
		sec=b;
		sal=c;
	}
	void display()
	{
		cout<<id<<" "<<sec<<" "<<sal<<endl;
	}
};
int main()
{
	emp e1;
	cout<<&e1<<endl;
	emp*e2=&e1;
	e1.display();
	e2->display();
	e2->id=1;
	e2->sec='A';
	e2->sal=1000.34f;
	e1.display();
	e2->display();
	e1.assign(1,'a',1.1f);
	e1.display();
	e2->display();
	e2->assign(2,'b',2.2f);
	e1.display();
	e2->display();
}