#include <iostream>
using namespace std;
template<typename t>
class A{
    t x;
    t *ptr;
    t result;
public:
    A(t a,t b){
        x = a;
        ptr = new t(b);
        result = add(x,*ptr);
    }
   t add(t a,t b){
        return a + b;
   }
    ~A(){
        delete ptr;
    }
    void display(){
    cout<<result<<endl;
    }
};
int main() {
    A<int>obj1(10,20);
	A<float> obj2(22.33,44.55);
	A<double>obj3(11.22,22);
	A<char>obj4('a','b');
    obj1.display();
	obj2.display();
	obj3.display();
	obj4.display();
}