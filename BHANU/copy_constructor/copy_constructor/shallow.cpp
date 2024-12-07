//shallow copy is also known as default copy constructor
//the drawback of shallow copy constructor is we can't modify pointers

/*
#include<iostream>
using namespace std;
class A{
	int x,y;
	int *ptr;
public:
	A():x(10),y(20){};
	void assign(int a,int b,int c){
		x = a;
		y = b;
		ptr = new int;
		*ptr = c;
	}
	void display(){
		cout<<x<<" "<<y<<" "<<*ptr<<endl;
	}
};
int main(){
	A obj1;
	obj1.assign(11,22,33);

	A obj2 = obj1;
	obj2.display();
}*/