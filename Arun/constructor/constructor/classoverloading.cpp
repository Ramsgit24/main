////with addition.
//function overloading
#include<iostream>
using namespace std;
class A
{
public:
	int add(int a,int b)
	{
		int c;
		c=a+b;
		return c;
	}
	float add(float a,float b)
	{
		float c;
		c=a+b;
		return c;
	}
	int add(int a)
	{
		int c;
		c=a+10;
		return c;
	}
};
int main()
{
	A obj;
	int a=obj.add(10,20);
	float b=obj.add(111.11f,222.22f);
	char c=obj.add('A','B');
	int d=obj.add(11);

	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
}