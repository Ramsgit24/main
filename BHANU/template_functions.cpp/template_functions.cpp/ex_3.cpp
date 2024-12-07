////#include<iostream>
////using namespace std;
////template<typename t>
////class A{
////	t a;
////	t b;
////public:
////	A(){
////		a=10;
////		b=20;
////	}
////	t add(t x,t y){
////		t c;
////		a=x;
////		b=y;
////		c = x+y;
////		return c;
////	}
////	void assign(t x,t y){
////		a=x;
////		b=y;
////	}
////	void display(){
////		cout<<a<<" "<<b<<endl;
////	}
////};
////int main(){
////	A<int> obj1;
////	A<float> obj2;
////	obj2.assign(11,22);
////	float d = obj2.add(55.0f,66.1f);
////	obj2.display();
////	cout<<"the addition values are :"<<d<<endl;
////}
//
//#include<iostream>
//using namespace std;
//template<typename t>
//class A{
//	t a;
//	t b;
//public:
//	A(){
//		a=10;
//		b=20;
//	}
//	t add(t x,t y);
//	void assign(t x,t y);
//	void display();
//};
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
//
//int main(){
//	A<int> obj1;
//	A<float> obj2;
//	obj2.assign(11,22);
//	float d = obj2.add(55.0f,66.1f);
//	obj2.display();
//	cout<<"the addition values are :"<<d<<endl;
//}