#include<iostream>
using namespace std;
class A{
	int x;
	int y;
public:
	A(){
		x=10;
		y=20;
	}
	virtual void assign(int a,int b){
		x=a;
		y=b;
	}
	void display(){
		cout<<x<<" "<<y<<endl;
	}
};
class B:public A{
	int p;
	int q;
public:
	B(){
		p=100;
		q=200;
	}
	void assign(int a,int b){
		p=a;
		q=b;
	}
	void display(){
		cout<<p<<" "<<q<<endl;
	}
};
int main(){
	int a=1000;
	char b='A';
	a=static_cast<int>(b);
	A obj1;
	B obj2;
	A* pobj1=dynamic_cast<A*>(&obj2);
	B* pobj2=dynamic_cast<B*>(&obj1);
	if(pobj1!=NULL){
		pobj1->assign(11,22);
		pobj1->display();
	}
	if(pobj2!=NULL)
	{
		pobj2->assign(33,44);
		pobj2->display();
		//pobj2->p=33;

	}
}