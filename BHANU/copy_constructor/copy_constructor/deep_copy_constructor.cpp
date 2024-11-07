/*#include<iostream>
using namespace std;

class A{
	int x,y;
	int *ptr;
public:
	A(){
		x = 10;
		y = 20;
		ptr= new int;  // (or) (int*)malloce(sizeof(int)); 
		*ptr = 30;
	};
	void assign(int a,int b,int c){
		x = a;
		y = b;
		*ptr = c;
	}
	void display(){
		cout<<x<<" "<<y<<" "<<*ptr<<endl;
	}
	
	A(const A& tobj1){
		x = tobj1.x;
		y = tobj1.y;
		ptr = new int;  // (or) (int*)malloce(sizeof(int)); 
        *ptr = *(tobj1.ptr);	
	}
};
int main(){
	A obj1;
	obj1.assign(11,22,33);

	A obj2 = obj1;
	obj2.display();
}
*/