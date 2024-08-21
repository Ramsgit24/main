//#include<iostream>
//using namespace std;
//#define max 100
//void main()
//{
//	int a[max],b[max],c[2*max];
//	int n1,n2,i,j,k;
//	cout<<"enter elements in a and b"<<endl;
//	cin>>n1>>n2;
//	cout<<"enter A array elements in ascending order"<<endl;
//	for(i=0;i<n1;i++)
//	{
//		cin>>a[i];
//	}
//	cout<<"enter B array elements in ascending order"<<endl;
//	for(i=0;i<n2;i++)
//	{
//		cin>>b[i];
//	}
//	i=0;
//	j=0;
//	k=0;
//	while((i<n1)&&(j<n2))
//	{
//		if(a[i]<b[j])
//		{
//			c[k++]=a[i++];
//		}
//		else
//		{
//			c[k++]=b[j++];
//		}
//	}
//	while(i<n1)
//	{
//		c[k++]=a[i++];
//	}
//	while(j<n2)
//	{
//		c[k++]=b[j++];
//	}
//	for(i=0;i<(n1+n2);i++)
//	{
//		cout<<c[i]<<" ";
//	}
//}