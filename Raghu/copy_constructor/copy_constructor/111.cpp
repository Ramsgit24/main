//#include<iostream>
//using namespace std;
//class A
//{
//	public:
//	int x;
//	int y;
//
//	A()
//	{
//		x=10;
//		y=20;
//	}
//	
//	void assign(int x,int y)
//	{
//	this->x=x;
//	this->y=y;
//	}
//	void disp()
//	{
//		cout<<x<<" "<<y<<endl;
//		cout<<this<<endl;
//	}
//	
//	A(const A& tobj1)
//	{
//	this->x=tobj1.x+10;
//	this->y=tobj1.y+20;
//	}
//	
//};
// A fun(A tobj1)
//	{
//		tobj1.x=tobj1.x+333;
//		tobj1.y=tobj1.y+444;
//		return tobj1;
//	}
//	
//int main()
//{
//	A obj1;
//	
//	obj1.disp();
//	A obj2=obj1;
//	A obj3=fun(obj2);
//	obj3.disp();
//}