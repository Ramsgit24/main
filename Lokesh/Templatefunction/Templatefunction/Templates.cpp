#include <iostream>
using namespace std;
template<typename T,typename U>
T add(T,U);
template<typename T,typename U>
T add(T a,U b){
return a+b;
}
template<typename B>
B sub(B a,B b)
{
    return a-b;
}
template<typename C>
C siva(C a,C b,C c)
{
    return (a-b-c);
}
/*int add(int,int);
float add(float,float);
double add(double,double);
 int add(int a,int b)
   {
       return a+b;
   }
   double add(double a,double b)
   {
       return a+b;
   }
   float add(float a,float b)
   {
       return a+b;
   }*/
   
   int main()
   {
       int f=siva<int>(32,12,10);
       int a=add<int,float>(12,33.88f);
       double b=add<double,int>(12.33,34);
       float c=add<float,double>(222.3f,444.5);
       cout<<"A="<<a<<endl;
       cout<<"B="<<b<<endl;
       cout<<"C="<<c<<endl;
        cout<<"F="<<f<<endl;
   }