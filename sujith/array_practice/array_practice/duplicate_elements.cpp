#include<iostream>
using namespace std;
#define N 100
void main()
{
	int a[]={1,2,3,3,4,5,5,6,7,8,8};
	int n=sizeof(a)/sizeof(a[0]);
	int b[N];
	int i=0,j=0,k=0;
	for(i=0;i<n;i++)
	{
		int found=0;
		for(k=0;k<i;k++)
		{
			if(a[i]==a[k])
			{
				found=1;
				break;
			}
		}
		if(!found)
		{
			b[j++]=a[i];
		}
	}
	for(i=0;i<j;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	cout<<"number of duplicate elements are :"<<(n-j)<<endl;

}