#include<iostream>
using namespace std;
struct Demo{
	int x;
	int y;
	void assign(int a,int b){
		x=a;
		y=b;
	}
	void display(){
		cout<<x<<" "<<y<<endl;
	}
};
int main(){
	Demo X;
	Demo* Y;
	Y=&X;
	Y->x=1445;
	Y->y=12234;
	X.display();
	X.assign(1,2);
	Y->display();
	Y->assign(123,123);
	X.display();
	// Y->display();
}