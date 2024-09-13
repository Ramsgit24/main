#include<iostream>
using namespace std;
class A
{
	//int *ptr;
	int x;
	//int *ptr2;
public:
	A()
	{
		//ptr=&x;
		x=100;
		//ptr2=(int*)malloc(sizeof(int));
	}
	void assign(int a)
	{

		//*ptr=a+100;
		//*ptr2=a+200;
		x=a+300;
	}
	void display()
	{
		cout<<x<<endl;
	}
	~A()
	{
		//free(x);
		cout<<"A destructor"<<endl;
	}
};
int main()
{
	//A obj1;
	A* pobj1=(A*)malloc(sizeof(A));
	pobj1->assign(10);
	pobj1->display();
	free(pobj1);
}