#include<iostream>
using namespace std;
template<typename I>
I add(I,I);
int add(int,int);
template<typename T>
T add(T,T,T);
int main()
{
	int a=add<int>(10,20);
	float b=add(12.32f,12.344f);
	double c=add<double>(122.33,1123.32);
	cout<<a<<" "<<b<<" "<<c<<endl;
	int d=add<int>(12,13,14);
	double e=add<double>(12.23,13.45,123.45);
	float f=add<float>(12.45f,53.5f,68.3f);
	cout<<e<<" "<<f<<" "<<d<<endl;
}
template<typename T>
T add(T a,T b,T c){
	return a+b+c;
}
template<typename I>
I add(I a,I b){
	return a+b;
}
int add(int a,int b){
	return a+b;
}

