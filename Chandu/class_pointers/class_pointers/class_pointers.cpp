#include<iostream>
using namespace std;
class A{
public:
	int x;
	int y;
	int* ptr;
public:
	A():ptr(&y),x(22),y(33){
		/*x=222;
		y=333;
		ptr=&x;*/
	}
	void assign(int a,int b){
		x=a;
		y=b;
		*ptr=a+b;
	}
	void display(){
		cout<<x<<" "<<y<<" "<<*ptr<<" "<<ptr<<endl;
	}
};
int main()
{
	A obj1;
	A* obj2;
	obj2=&obj1;

	obj1.display();
	//obj1.assign(33,66);
	//obj1.display();

	obj2->assign(11,22);
	obj2->y=444;
	*obj2->ptr=555;
	*obj1.ptr=666;
	obj1.display();
}