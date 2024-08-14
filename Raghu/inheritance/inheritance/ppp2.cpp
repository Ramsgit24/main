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
//	A();
//	void Adisp();
//	void Acheck();
//};
//class B:protected A
//{
//	int a;
//public:
//	int b;
//protected:
//	int c;
//public:
//	B();
//	void Bdisp();
//	void Bcheck();
//	
//};
//class C:protected B
//{
//	int i;
//public:
//	int j;
//protected:
//	int k;
//public:
//	C();
//	void Cdisp();
//	void Ccheck();
//	
//};
//A::A()
//{
//	cout<<"A hello"<<endl;
//	x=10;
//	y=20;
//	z=30;
//}
//void A::Adisp()
//{
//	cout<<x<<" "<<y<<" "<<z<<endl;
//}
//void A::Acheck()
//{
//	x=100;
//	y=200;
//	z=300;
//}
//B::B()
//{
//	cout<<"B hello"<<endl;
//	a=40;
//	b=50;
//	c=60;
//}
//void B::Bdisp()
//{
//	cout<<a<<" "<<b<<" "<<c<<endl;
//}
//void B::Bcheck()
//{
//	a=400;
//	b=500;
//	c=600;
//}
//C::C()
//{
//	cout<<"C hello"<<endl;
//	i=70;
//	j=80;
//	k=90;
//}
//
//void C::Cdisp()
//{
//	cout<<i<<" "<<j<<" "<<k<<endl;
//}
//void C::Ccheck()
//{
//	i=700;
//	j=800;
//	k=900;
//}
//int main()
//{
//	A obj1;
//	B obj2;
//	C obj3;
//	obj1.Adisp();
//	obj1.Acheck();
//	obj1.Adisp();
//	obj2.Bdisp();
//	obj3.Cdisp();
//	obj3.Bdisp();
//	
//
//	
//}