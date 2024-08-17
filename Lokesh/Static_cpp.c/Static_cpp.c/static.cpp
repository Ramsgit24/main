//#include<iostream>
//using namespace std;
//int y=1;
//void fun(){
//	static int x=1;
//	cout<<x<<" " <<y<<endl;
//	x=x+1;
//}
//int main()
//{
//	fun();
//	fun();
//	fun();
//	fun();
//	y=y+10;
//	fun();
//	fun();
//}
//

#include<iostream>
using namespace std;
class A
{
	    int x;
static  int y;
public:
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
int A::y;
int main()
{
	A obj1;
	obj1.assign(11,22);
	obj1.display();
	A obj2;
	obj2.assign(111,222);
	obj2.display();
}

