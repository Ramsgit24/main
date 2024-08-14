//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	int a;
//	int b;
//
//	A()
//	{
//		cout<<"A hello"<<endl;
//		a=10;
//		b=20;
//	}
//	void Adisp()
//	{
//		cout<<a<<" "<<b<<endl;
//	}
//
//};
//class B
//{
//public:
//	int c;
//	int d;
//	
//
//	B()
//	{
//		cout<<"B hello"<<endl;
//		c=30;
//		d=40;
//	}
//	void Bdisp()
//	{
//		cout<<c<<" "<<d<<endl;
//	}
//	
//};
//class C:public A,public B
//{
//public:
//	int e;
//	int f;
//	
//
//	C()
//	{
//		cout<<"C hello"<<endl;
//		e=50;
//		f=60;
//	}
//	void Cdisp()
//	{
//		cout<<e<<" "<<f<<endl;
//	}
//	void check()
//	{
//		a=11;
//		b=22;
//		c=33;
//		d=44;
//		e=55;
//		f=66;
//	}
//};
//
//class D:public C
//{
//public:
//	int g;
//	int h;
//
//	D()
//	{
//		cout<<"D hello"<<endl;
//		g=70;
//		h=80;
//	}
//	void Ddisp()
//	{
//		cout<<g<<" "<<h<<endl;
//	}
//
//};
//class E
//{
//public:
//	int i;
//	int j;
//	
//
//	E()
//	{
//		cout<<"E hello"<<endl;
//		i=90;
//		j=100;
//	}
//	void Edisp()
//	{
//		cout<<i<<" "<<j<<endl;
//	}
//	
//};
//class F:public D,public E
//{
//public:
//	int k;
//	int l;
//	
//
//	F()
//	{
//		cout<<"F hello"<<endl;
//		k=50;
//		l=60;
//	}
//	void Fdisp()
//	{
//		cout<<k<<" "<<l<<endl;
//	}
//	void check()
//	{
//		g=111;
//		h=222;
//		i=333;
//		j=444;
//		k=555;
//		l=666;
//	}
//};
//int main()
//{
//	A obj1;
//	B obj2;
//	C obj3;
//	D obj4;
//	E obj5;
//	F obj6;
//
//	obj1.Adisp();
//	obj2.Bdisp();
//	obj3.Adisp();
//	obj3.Bdisp();
//	obj3.Cdisp();
//	obj3.check();
//	obj3.Adisp();
//	obj3.Bdisp();
//	obj3.Cdisp();
//
//	obj4.Ddisp();
//	obj5.Edisp();
//	obj6.Fdisp();
//	
//	obj4.Adisp();
//	obj4.Bdisp();
//	obj4.Cdisp();
//	obj4.Ddisp();
//
//	obj6.check();
//	obj6.Ddisp();
//	obj6.Edisp();
//	obj6.Fdisp();
//
//	
//	
//	
//}
//
//	