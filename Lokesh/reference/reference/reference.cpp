//#include<iostream>
//using namespace std;
//void fun(int &,int &);
//int main()
//{
//	int a;
//	int b;
//	cin>>a;
//		cin>>b;
//		cout<<a<<" "<<b<<endl;
//	fun(a,b);
//	cout<<a<<" "<<b<<endl;
//}
//void fun(int &x,int &y)
//{
//	x=x+20;
//	y=y+20;
//}
//


//#include<iostream>
//using namespace std;
//int assign(int &,int &);
//int main()
//{
//	int a;
//	int b;
//	cin>>a;
//	cin>>b;
//	assign(a,b);
//	cout<<"ADDITION: "<<a+b<<endl;
//}
//int assign(int &x,int &y)
//{
//	return x+y;
//}



//                                  CLASS REFERENCE VARIABLE

#include<iostream>
using namespace std;
class A
{
	int x;
	int& y;
public:
	A():x(10),y(x)
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
	A1.display();
	A1.assign(111,222);
	A1.display();
	cout<<sizeof(A)<<endl;
}
		