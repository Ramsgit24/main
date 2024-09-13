#include<iostream>
using namespace std;
class A{
	int x;
	int y;
	int* z;
public:
	A():x(10),y(20),z(&x){

		x=30;
		y=40;
		z=&y;
	}
	void assign(int a,int b){
		x=a;
		y=b;
	}
	void display(){
		cout<<x<<" "<<y<<endl;
	}
};
/*
class B{
	int p;
	int q;
	int* r;
public:
	A():p(100),q(200),r(&p){

		p=30;
		q=40;
		r=&q;
	}
	void assign(int a,int b){
		p=a;
		q=b;
	}
	void display(){
		cout<<p<<" "<<q<<endl;
	}
};*/
int main(){
	/*A A1;
	A* A2;
	A2=&A1;
	A2->display();
	A2->assign(112,123);
	A1.display();*/
	A A1;

	


}