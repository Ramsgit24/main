#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i,j;
	cout<<"enter array elements"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	int temp;
	for(j=0;j<10;j++)
	{
		for(i=0;i<9;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"difference of largest and smallest is "<<a[9]-a[0]<<endl;
	cout<<"difference of largest and second largest is "<<a[9]-a[8]<<endl;



}