/*#include<iostream>
using namespace std;
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
int c=a+10;
return c;
}
int main()
{
int a=add(11,12);
float b=add(23.22f,43.22f);
char c=add('A','B');
int d=add(35);
cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}*/
/*#include<iostream>
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
		int c=a+10;
		return c;
	}
};
int main()
{
	/*int a=add(11,12);
	float b=add(23.22f,43.22f);
	char c=add('A','B');
	int d=add(35);
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	A obj;
	int a;
	float b;
	char c;
	a=obj.add(11,11);
	b=obj.add(11.5f,11.9f);
	c=obj.add('A','B');
	cout<<a<<" "<<b<<" "<<c<<endl;

}*/


// suntraction

/*#include<iostream>
using namespace std;
class BA
{
public:
	int sub(int a,int b)
	{
		int c;
		c=a-b;
		return c;
	}
	float sub(float a,float b)
	{
		float c;
		c=a-b;
		return c;
	}
	char sub(char a,char b)
	{
		char c;
		c=a-b;
		return c;
	}
};
int main()
{
	BA obj;
	int a=obj.sub(33,22);
	float b=obj.sub(99.5f,95.5f);
	char c=obj.sub('a','r');
	cout<<a<<" "<<b<<" "<<c<<endl;
}*/

//Multiplication
#include<iostream>
using namespace std;
class B
{
public:
	int mul(int a,int b)
	{
		int c;
		c=a*b;
		return c;
	}
	float mul(float a,float b)
	{
		float c;
		c=a*b;
		return c;
	}
	char mul(char a,char b)
	{
		char c;
		c=a*b;
		return c;
	}
};
int main()
{
	B obj;
	int a=obj.mul(33,22);
	float b=obj.mul(99.5f,95.5f);
	char c=obj.mul('F','a');
	cout<<a<<" "<<b<<" "<<c<<endl;
}