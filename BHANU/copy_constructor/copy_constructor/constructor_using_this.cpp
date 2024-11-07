/*#include<iostream>
using namespace std;

class A{
	int x,y;
public:
	A():x(10),y(20){};
	void assign(int a,int b){
		x = a;
		y = b;
	}
	void display(){
		cout<<x<<" "<<y<<endl;
	}
	A(const A& tobj1){
		x = tobj1.x;
		y = tobj1.y;
	}

	// above and below functions are same

	A(const A& tobj1){
		this->x = tobj1.x;
		this->y = tobj1.y;
	}
};
int main(){
	A obj1;
	obj1.assign(11,22);

	A obj2 = obj1;
	obj2.display();
}*/



/*#include<iostream>
using namespace std;
class A{
	int x,y;
public:
	A(){
		x=10;
		y=20;
	}
	void assign(int x,int y){
		this ->x = x;
		this ->y = y;
	}
	void display(){
		cout<<x<<" "<<y<<endl;

		
	}
	A(const A& tobj1){
		this ->x = tobj1.x;
		this ->y = tobj1.y;
	}
	A fun(A tobj1){
		tobj1.x = 222;
		tobj1.y = 333;
		return tobj1;
	}
};
int main(){
	A obj1;
	obj1.assign(11,22);
	A obj2 = obj1;
	A obj3 = obj2.fun(obj2);
	obj3.display();
}*/