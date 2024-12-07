//#include<iostream>
//using namespace std;
//template<typename t>
//class A{
//public:
//	t a;
//	t b;
//	A();
//	t add(t x,t y);
//	void assign(t x,t y);
//	void display();
//};
//template<typename t>
//A<t>::A(){
//	a=10;
//	b=20;
//}
//template<typename t>
//t A<t>::add(t x,t y){
//	t c;
//	a=x;
//	b=y;
//	c = x+y;
//	return c;
//}
//template<typename t>
//void A<t>::assign(t x,t y){
//	a=x;
//	b=y;
//}
//template<typename t>
//void A<t>::display(){
//	cout<<a<<" "<<b<<endl;
//}
//template<typename s>
//class B:public A<s>{
//public :
//	s c;
//	s d;
//
//	B(){
//		c=30;
//		d=40;
//	}
//	s add(s m,s n);
//	void assign(s m,s n);
//	void display();
//};
//template<typename s>
//s B<s>::add(s m,s n){
//	s e;
//	c=m;
//	d=n;
//	e = m+n;
//	return e;
//}
//template<typename s>
//void B<s>::assign(s m,s n){
//	c=m;
//	d=n;
//}
//template<typename s>
//void B<s>::display(){
//	cout<<c<<" "<<d<<endl;
//}
//
//int main(){
//	A<int> obj1;
//	A<float> obj2;
//	obj2.assign(11,22);
//	float d = obj2.add(55.0f,66.1f);
//	obj2.display();
//	cout<<"the addition values are :"<<d<<endl;
//}