# include<iostream>
using namespace std;
struct emp
{
	int id;
	float sal;
	char dep;
	void assign(int x, float y, char z);
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
	cout<<id<<" "<<sal<<" "<<dep<<endl;
}
int main()
{
	struct emp e1,e2;
	e1.assign(13,888.36,'c');
	e2.id=123;
	e1.sal=486.3f;
	e2.dep='a';
	e1.display();
	e2.display();
}