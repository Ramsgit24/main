#include<iostream>
using namespace std;
class A{
    int x,y;
    int *ptr;
public:
    A(){
        x = 10;
        y = 20;
        ptr = new int;
        *ptr = 30;
    }
    A(const A& obj1){
        x = obj1.x;
        y = obj1.y;
        ptr = new int;
        *ptr = *obj1.ptr;
    }
    void assign(int a,int b,int c){
        x = a;
        y = b;
        *ptr = c; 
    }
    ~A(){  
        delete ptr;
    }
    void display(){
        cout<<x<<" "<<y<<" "<<*ptr<<endl;
        cout<<&x<<" "<<&y<<" "<<ptr<<endl;
    }
     A operator= (const A& obj4) {
		x = obj4.x;
        y = obj4.y;
        ptr = new int;        
        *ptr = *obj4.ptr;     
        return obj4;  
    }
};
int main(){
    A obj1;
    A obj2 = obj1;    //deep copy
    obj2.assign(11,22,33);
    A obj3;
    obj3 = obj2;      //assignment copy operator overloading
    obj1.display();
    obj2.display();
    obj3.display();
}