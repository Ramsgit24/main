//#include<iostream>                    09-08-2024
//using namespace std;
//class A
//{
//	int x;
//	int y;
//public:
//	A()
//	{
//		x=29;
//		y=39;
//	}
//	void assign(int a,int b)  //now its default constructor
//	{                          //void assign(int a,int b=10)
//		x=a;                  //untill we are giving the 2 parameters in main or assign in main
//		y=b;
//	}
//	void display()
//	{
//		cout<<x<<" "<<y<<endl;
//	}
//};
//int main()
//{
//	A obj;
//	obj.assign(38);
//	obj.display();
//}








//#include<iostream>
//using namespace std;
//class A
//{
//	int x;
//	int y;
//public:
//	A()
//	{
//		x=29;
//		y=39;
//	}
//	void assign(int a=11,int b=12)
//	{                         
//		x=a;                  
//		y=b;
//	}
//	void assign(int a)
//	{
//		x=a;
//		y=a;
//	}
//	void assign()
//	{
//		x=88;
//		y=66;
//	}
//	void display()
//	{
//		cout<<x<<" "<<y<<endl;
//	}
//};
//int main()
//{
//	A obj;
//	obj.assign(432,245);
//	obj.display();
//}







#include<iostream>
using namespace std;

class A
{
	public:
	int x;
	int y;
	A()
	{
		x=29;
		y=39;
	}
	void assign(int a,int b)
	{                         
		x=a;                  
		y=b;
	}
	void assign(int a=12)
	{
		A toobj;
		toobj.x=a;
		toobj.y=a;
	}
	void assign()
	{
		A toobj2;
		toobj2.x=88;
		toobj2.y=66;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	A obj;
	obj.assign(13);
	obj.display();
}