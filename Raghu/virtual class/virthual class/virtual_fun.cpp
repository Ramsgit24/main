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
//	virtual void assign(int a,int b)
//	{
//		cout<<"A assign"<<endl;
//		x=a;
//		y=b;
//	}
//	void disp()
//	{
//		cout<<"A disp"<<endl;
//		cout<<x<<" "<<y<<endl;
//		
//	}
//};
//
///*{
//	int p;
//	int q;
//public:
//	B()
//	{
//		p=10;
//		q=20;
//	}
//	 void assign(int a,int b)
//	{
//		cout<<"B assign"<<endl;
//		p=a;
//		q=b;
//	}
//	void disp()
//	{
//		cout<<p<<" "<<q<<endl;
//		cout<<"B disp"<<endl;
//	}
//};*/
//int main()
//{
//	A obj1;
//	A* pobj1=&obj1;
//	//B obj2;
//	//A* pobj1=&obj2;
//	pobj1->assign(11,22);
//	pobj1->disp();
//	cout<<sizeof(A)<<endl;
//}