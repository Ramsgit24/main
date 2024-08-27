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
//	void disp()
//	{
//		cout<<x<<" "<<y<<endl;
//	}
//	/*A operator-()
//	{
//		A tobj1;
//		tobj1.x=-x;
//		tobj1.y=-y;
//		return tobj1;
//	}*/
//	friend A operator-(A);
//};
//A operator-(A tobj1)
//{
//	tobj1.x=-tobj1.x;
//	tobj1.y=-tobj1.y;
//	return tobj1;
//}
//int main()
//{
//	A obj1;
//	A obj2=-obj1;
//	obj2.disp();
//	obj1.disp();
//	
//}
