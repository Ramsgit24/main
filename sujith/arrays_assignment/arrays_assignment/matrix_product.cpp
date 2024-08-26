#include<iostream>
using namespace std;
void main()
{
	int a[][2]={1,2,3,4};
	int b[][2]={1,2,3,4};
	int c[2][2]={0};
	int i,j,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}