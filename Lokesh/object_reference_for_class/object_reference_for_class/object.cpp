#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A():x(20),y(x)
	{
		x=30;
		y=40;
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
	A A1;
	A& A2=A1;
	A1.display();
	A1.assign(22,33);
	A2.display();
}


