//#include<iostream>
//using namespace std;
//class A
//{
//	int x;
//	int y;
//public:
//	A()
//	{
//		x=10;
//		y=20;
//	}
//	void assign(int a,int b)
//	{
//		x=a;
//		y=b;
//	}
//	void display()
//	{
//		cout<<x<<" "<<y<<endl;
//	}
//	A operator-()
//	{
//		A obj1;
//		obj1.x=-x;
//    	obj1.y=-y;
//		return obj1;
//	}
////friend A operator-(A);
//};
//int main()
//{
//	A obj1;
//	A obj2=-obj1;
//	obj2.display();
//	obj1.display();
//}





/*  UNARY OPERATOR INSIDE 
#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
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
	void operator++()
	{
		x=++x;
		y=++y;
	}
	A operator++(int a)
	{
		A obj1;
		obj1.x=x++;
		obj1.y=y++;
		return obj1;
	}
};
int main()
{
	A obj1;
	++obj1;
	obj1.display();
	A obj2;
	A obj3=obj2++;
	obj3.display();

}*/







#include<iostream>
using namespace std;
class A
{
public:
	int x;
	int y;
	A()
	{
		x=10;
		y=20;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
};
A operator++(A& tobj1)
{
	tobj1.x=++tobj1.x;
	tobj1.y=++tobj1.y;
	return tobj1;
}
A operator++(A& tobj1,int a)
{
	A tobj2;
  tobj2.x=tobj1.x++;
  tobj2.y=tobj1.y++;
  return tobj2;
}

int main()
{
	A obj1;
	A obj2=++obj1;
	obj1.display();
	//obj2.display();

	A obj3;
	obj1++;
	//obj3.display();
	obj1.display();
}




