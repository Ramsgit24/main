//#include<iostream>
//using namespace std;
//class A
//{
//public:
//int a;
//int b;
//
//A()
//{
//cout<<"A hello"<<endl;
//a=10;
//b=20;
//}
//void Adisp()
//{
//cout<<a<<" "<<b<<endl;
//}
//
//};
//class B:public A
//{
//public:
//int c;
//int d;
//
//
//B()
//{
//cout<<"B hello"<<endl;
//c=30;
//d=40;
//}
//void Bdisp()
//{
//cout<<c<<" "<<d<<endl;
//}
//
//};
//class D:public A
//{
//public:
//int g;
//int h;
//
//
//D()
//{
//cout<<"D hello"<<endl;
//g=70;
//h=80;
//}
//void Ddisp()
//{
//cout<<g<<" "<<h<<endl;
//}
//};
//class C:public B,public D
//{
//public:
//int e;
//int f;
//
//
//C()
//{
//cout<<"C hello"<<endl;
//e=50;
//f=60;
//}
//void Cdisp()
//{
//cout<<e<<" "<<f<<endl;
//}
//void check()
//{
////a=111;
////b=222;
////c=333;
////d=444;
//
//}
//};
//class E:public D
//{
//public:
//int i;
//int j;
//
//
//E()
//{
//cout<<"E hello"<<endl;
//i=90;
//j=100;
//}
//void Edisp()
//{
//cout<<i<<" "<<j<<endl;
//}
//};
//class F:public C,public E
//{
//public:
//int k;
//int l;
//
//
//F()
//{
//cout<<"F hello"<<endl;
//k=110;
//l=120;
//}
//void Fdisp()
//{
//cout<<k<<" "<<l<<endl;
//}
//void check();
//};
//int main()
//{
//A obj1;
//B obj2;
//C obj3;
//D obj4;
//E obj5;
//F obj6;
//
//obj1.Adisp();
//obj2.Bdisp();
//obj3.Cdisp();
//obj4.Ddisp();
//obj5.Edisp();
//obj6.Fdisp();
//cout<<"size of C class is "<<sizeof(C)<<endl;
//
//
////obj3.check();
////obj3.Adisp();
////obj3.Bdisp();
////obj3.Ddisp();
////obj3.Cdisp();
//
//
//}