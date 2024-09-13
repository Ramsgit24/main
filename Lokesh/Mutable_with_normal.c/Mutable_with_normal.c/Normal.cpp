#include<iostream>
using namespace std;
class A
{
mutable int x;
mutable int y;
    public:
    A()
    {
        x=20;
        y=40;
    }
    void Aassign(int a,int b)const
    {                               //mutable and constant
       x=a;
       y=b;
    }
    void Adisplay()const
    {
        cout<<x<<" "<<y<<endl;
    }
};
class B:public A
{
    int p;
    int q;
    public:
    B()
    {
    p=111;
    q=222;
       }
       void assign(int a,int b)
       {
           p=a;
           q=b;
       }
       void Bdisplay()
       {
           cout<<p<<" "<<q<<endl;
       }
};
int main()
{
     const A A1;
     A1.Aassign(44,55);
     A1.Adisplay();
     B N1;
     N1.Bdisplay();
     N1.Adisplay();
     N1.Bdisplay();
}