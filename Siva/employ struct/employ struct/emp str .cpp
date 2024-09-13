#include<iostream>
using namespace std;
struct emp
{
	int id;
	float sal;
	char dep;
void assign(int x,float y,char z)
{
	id =x;
	sal =y;
	dep =z;
}
void display()
{
	cout<<id<< " "<<sal<<" "<<dep<<endl;
}
};
int main()
{
	struct emp e1;
	struct emp e2;
	e1.assign(10,384.3f,'A');
	e1.display();
	e2=e1;
	e2.display();
	e1.id=33;
	e1.display();
	e2.display();
}