#include<stdio.h>
#include<iostream>
using namespace std;
	class emp
	{
	public:
		int x;
		int y;
		void assign(int a,int b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<x<<" "<<y<<endl;
		}
	};
	int main()
	{
	emp e1;
	e1.assign(11,44);
	e1.display();
	}
