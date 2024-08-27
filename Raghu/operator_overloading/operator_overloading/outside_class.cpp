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
//	void disp();
//	friend A operator+(A,A);
//	friend A operator-(A,A);
//	
//};
//A operator+(A tobj1,A tobj2)
//{
//	A tobj3;
//	tobj3.x=tobj1.x+tobj2.x;
//	tobj3.y=tobj1.y+tobj2.y;
//	return tobj3;
//}
//A operator-(A tobj1,A tobj2)
//{
//	A tobj4;
//	tobj4.x=tobj1.x-tobj2.x;
//	tobj4.y=tobj1.y-tobj2.y;
//	return tobj4;
//}
//void A::disp()
//{
//	cout<<x<<" "<<y<<endl;
//}
//int main()
//{
//	A obj1;
//	A obj2;
//	A obj3=obj1+obj2;
//	obj3.disp();
//	A obj4=obj1-obj2;
//	obj4.disp();
//}