//#include<iostream>
//using namespace std;
//class A
//{
//	int x;
//public:
//	int y;
//protected:
//	int z;
//public:
//	void Adisp()
//	{
//		cout<<"A const"<<endl;
//		x=11;
//		y=21;
//		z=31;
//		cout<<x<<" "<<y<<" "<<z<<endl;
//	}
//};
//class B:public A
//{
//	int a;
//public:
//	int b;
//protected:
//	int c;
//public:
//	void Bdisp()
//	{
//		cout<<"B const"<<endl;
//		a=111;
//		b=211;
//		c=311;
//		
//		cout<<a<<" "<<b<<" "<<c<<endl;
//	}
//};
//class C:public B
//{
//	int i;
//public:
//	int j;
//protected:
//	int k;
//public:
//	void Cdisp()
//	{
//		cout<<"C const"<<endl;
//		i=101;
//		j=102;
//		k=103;
//		cout<<i<<" "<<j<<" "<<k<<endl;
//	}
//};
//int main()
//{
//	A obj1;
//	B obj2;
//	C obj3;
//
//	obj1.Adisp();
//	obj2.Bdisp();
//	obj3.Cdisp();
//	
//}