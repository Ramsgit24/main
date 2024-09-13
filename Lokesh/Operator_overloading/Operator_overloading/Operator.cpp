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
//	A operator+(A obj1)
//	{
//		A obj3;
//		obj3.x=x+obj1.x;
//		obj3.y=y+obj1.y;
//		return obj3;
//	}
//	void display()
//	{
//		cout<<x<<" "<<y<<endl;
//	}
//};
//int main()
//{
//	A obj1;
//	A obj2;
//	A obj3=obj1+obj2;
//	obj3.display();
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
//		x=10;
//		y=20;
//	}
//	A operator-(A obj)
//	{
//		A obj4;
//		obj4.x=x-obj.x;
//		obj4.y=y-obj.y;
//		return obj4;
//	}
//	A operator+(A obj1)
//	{
//		A obj3;
//		obj3.x=x+obj1.x;
//		obj3.y=y+obj1.y;
//		return obj3;
//	}
//	void display()
//	{
//		cout<<x<<" "<<y<<endl;
//	}
//};
//int main()
//{
//	A obj1;
//	A obj2;
//	A obj3=obj1+obj2;
//	A obj4=obj1-obj2;
//	obj3.display();
//}

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
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
	friend A operator+(A,A);
	friend A operator-(A,A);
	friend A operator*(A,A);
};
A operator+(A obj1,A obj2)
{
	A obj3;
	obj3.x=obj1.x+obj2.x;
	obj3.y=obj1.y+obj2.y;
	return obj3;
}
A operator-(A obj1,A obj2)
{
	A obj3;
	obj3.x=obj1.x-obj2.x;
	obj3.y=obj1.y-obj2.y;
	return obj3;
}
A operator*(A obj1,A obj2)
{
	A obj3;
	obj3.x=obj1.x*obj2.x;
	obj3.y=obj1.y*obj2.y;
	return obj3;
}



int main()
{
	A obj1;
	A obj2;
	A obj3=obj1+obj2;
	obj3.display();

	A obj4=obj1-obj2;
	obj4.display();

	A obj5=obj1*obj2;
	obj5.display();
}