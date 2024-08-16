#include<iostream>
using namespace std;
struct emp
{
	int id;
	char sec;
	double sal;
};
void fun(int[]);
void fun1(struct emp[]);
void main()
{
	int a[]={1,2,3,4,5};
	struct emp B[]={{1,'A',1000.2},{2,'B',2000.4},{3,'C',3000.34}};
	fun(a);
	fun1(B);
}
void fun(int c[])
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		cout<<c[i]<<" ";
		sum+=c[i];
	}
	cout<<"sum of elements :"<<sum<<endl;
	cout<<endl;
}
void fun1(struct emp b[])
{
	for(int i=0;i<3;i++)
	{
		cout<<i+1<<"employee details"<<endl;
		cout<<b[i].id<<"_"<<b[i].sec<<"_"<<b[i].sal<<endl;
		cout<<endl;
	}
}