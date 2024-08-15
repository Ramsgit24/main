#include<iostream>
using namespace std;
template<typename T>
T add(T ,T);						//declaration
template<typename P,typename Q>
Q add(P ,Q);						//declaration
template<typename A,typename B,typename C>
A pro(A,B,C);
int main()
{
	int a=add(10,20);
	float b=add<float>(10.23f,10.23f);
	char c=add<char>('a','a');
	float d=add<int,int>(10,12.34f);
	cout<<"additions are: "<<a<<" "<<b<<" "<<c<<" "<<" "<<e<<endl;
}
template<typename T> //definition of function
T add(T a,T b)
{
	T c;
	c=a+b;
	return c;
}
template<typename P,typename Q>
Q add(P a,Q b)
{
	Q c;
	c=a+b;
	return c;
}
