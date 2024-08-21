//#include<iostream>
//using namespace std;
//void fun(int ,int);
//int* fun1(int*,int*);
//int* fun2();
//int main()
//{
//	int a;
//	int b;
//	cout<<"enter two values";
//	cin>>a;
//	cin>>b;
//	fun(a,b);	//call by value
//	cout<<a<<" "<<b<<endl;
//	fun1(&a,&b);	// call by adress
//	cout<<a<<" "<<b<<endl;
//	int*c=fun2(); 
//	cout<<*c<<endl;
//	int*d=fun1(&a,&b);	//returning pointer
//	cout<<*d<<endl;
//}
//void fun(int x,int y)
//{
//	x=x+10;
//	y=y+20;
//}
//int* fun1(int*x,int*y)
//{
//	*x+=10;
//	*y+=20;
//	return x;
//}
//int* fun2()
//{
//	int p=30;
//	int*q;
//	q=&p;
//	return q;
//}