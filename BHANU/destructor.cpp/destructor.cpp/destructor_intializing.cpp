//#include<iostream>
//using namespace std;
//class A{
//	int x,y;
//public:
//	A(){
//		cout<<"A constructor"<<endl;
//		x=10;
//		y=20;
//	}
//	~A(){
// 		cout<<"A destructor"<<endl;
//	}
//	A(int a,int b){
//		cout<<"A constructor"<<endl;
//		x=a;
//		y=b;
//	}
//	void assign(int a,int b){
//		x=a;
//		y=b;
//	}
//	void display(){
//		cout<<x<<" "<<y<<endl;
//	}
//};
//int main(){
//	A obj1;
//	A obj2(11,22);
//	obj1.assign(33,44);
//	obj1.display();
//	obj2.display();
//}

//#include<iostream>
//using namespace std;
//class A{
//	int x,y;
//public:
//	A(){
//		cout<<"A constructor"<<endl;
//		x=10;
//		y=20;
//	}
//	~A(){
// 		cout<<"A destructor"<<endl;
//	}
//	void assign(int p,int q){
//		x=p;
//		y=q;
//	}
//	void display(){
//		cout<<x<<" "<<y<<endl;
//	}
//};
//class B:public A{
//	int a,b;
//public:
//	B(int c,int d){
//		cout<<"B constructor"<<endl;
//		a=c;
//		b=d;
//	}
//	~B(){
// 		cout<<"B destructor"<<endl;
//	}
//	void assign(int c,int d){
//		a=c;
//		b=d;
//	}
//	void display(){
//		cout<<a<<" "<<b<<endl;
//	}
//};
//int main(){
//	B obj1;
//	B obj2(88,99);
//	B.assign(66,77);
//	B.display();
//}


#include<iostream>
using namespace std;
class A{
	int length;
public:
	int square(int length)const{
		return length * length;
	}
};
int main(){
	int x;
	cout<<"Enter x :"<<endl;
	cin>>x;
	A obj;
	cout << "The square of " << x << " is " << obj.square(x) << endl;
}

