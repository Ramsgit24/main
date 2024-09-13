#include<iostream>
using namespace std;
inline void fun()
{
	cout<<"A fun function"<<endl;
}
int main()
{
	cout<<"1st call"<<endl;
	fun();
	cout<<"2nd call"<<endl;
	fun();
	cout<<"3rd call"<<endl;
	fun();
	cout<<"++++++++++++"<<endl;
	fun();
	fun();
	fun();
}