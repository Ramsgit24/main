#include<iostream>
using namespace std;

//class A
//{
//	int x;
//	int &y;
//public:
//	A():x(10),y(x)
//	{
//		x=20;
//		y=30;
//	}
//
//	void assign(int a,int b)
//	{
//		x=a;
//		y=b;
//	}
//	void disp()
//	{
//		cout<<x<<" "<<y<<endl;
//		cout<<&x<<" "<<&y<<endl;
//	}
//};
//int main()
//{
//	A obj;
//	obj.assign(33,44);
//	obj.disp();
//	cout<<sizeof(A)<<endl;
//}

class A
{
	int x;
	int y;
public:
	A()
	{
		x=20;
		y=30;
	}

	void assign(int a,int b)
	{
		x=a;
		y=b;
	}
	void disp()
	{
		cout<<x<<" "<<y<<endl;
		//cout<<&x<<" "<<&y<<endl;
	}
};

void check(A tobj1)
{
	tobj1.assign(455,655);
}
A check1(A& tobj1)
{
	tobj1.assign(455,655);
	return tobj1;
}
A& check2(A tobj1)
{
	tobj1.assign(455,655);
	return tobj1;
}

A& check3(A& tobj1)
{
	tobj1.assign(455,655);
	return tobj1;
}


int main()
{
	A obj;
	check(obj);
	obj.disp();
	A obj2=check1(obj);
	obj2.disp();

	A obj3=check2(obj);
	obj3.disp();

	A& obj4=check3(obj);
	obj4.disp();
	
	/*A &obj1=obj;
	obj1.assign(11,22);
	obj.disp();*/
}