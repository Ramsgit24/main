#include<iostream>
using namespace std;
void add(int ,int);
void sub(int);
void letter(char,char);
void mark(float,float);
int main()
{
	add(30,40);
	sub(20);
	letter('G','A');
	mark(1.8f,2.8f);
}
void add(int a,int b)
{
	cout<<"c="<<a+b<<endl;
}
void sub(int c)
{
	int a=20;
	int d;
	d=a-c;
	cout<<"d="<<d<<endl;
}
void letter(char h,char y)
{
	cout<<"a="<<h<<" "<<y<<endl;
	
}
void mark(float a,float b)
{
	float f=a/b;
	cout<<"f="<<f<<endl;
}


