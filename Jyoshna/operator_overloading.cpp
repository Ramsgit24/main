#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
public:
    A()
    {
        x = 10;
        y = 20;
    }
    void assign(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << x << " " << y << endl;
    }
    friend A operator++(A &);
    friend A operator++(A &,int);
};
A operator++(A &tobj1)
{
   
    tobj1.x = ++tobj1.x;
    tobj1.y = ++tobj1.y;
    return tobj1;
}
A operator++(A &tobj1, int)
{
    A tobj2;
    tobj2.x = tobj1.x++;
    tobj2.y = tobj1.y++;
    return tobj2;
}
int main()
{
    A obj1;
    A obj3 = ++obj1;
    A obj4 = obj1++;
	obj3.display();
    obj4.display();
    obj1.display();
}