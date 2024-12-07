//#include<iostream>
//using namespace std;
//
//template<typename x,typename y>
//x add(x a,y b){
//	x c;
//	c=a+b;
//	return c;
//}
//
//int main(){
//	float d = add<float,int>(10.3f,10);//20.3
//	int e = add<int,float>(1000,200.07f);//1200
//	float f = add(10.8f,20.3f);//if we have two float values it will consider and add float function
//	cout<<"the addition values are :"<<d<<endl;
//	cout<<"the addition values are :"<<e<<endl;
//	cout<<"the addition values are :"<<f<<endl;
//
//}



//#include<iostream>
//using namespace std;
//class A{
//	int x,y;
//public:
//	A(){
//		x=10;
//		y=20;
//	}
//	template<typename p,typename r>
//	r add(p a,r b){
//		r c;
//		c= a+b;
//		return c;
//	}
//	template<typename q>
//	q add(q a,q b){
//		q c;
//		c= a+b;
//		return c;
//	}
//	/*float add(int a,int b){
//		float c;
//		c=a+b;
//		return c;
//	}*/
//};
//int main(){
//	A obj1;
//	float a = obj1.add(10.9f,10.8f);
//	cout<<"The addition values are :"<<a<<endl;
//}
