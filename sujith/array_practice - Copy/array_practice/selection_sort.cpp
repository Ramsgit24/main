//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10];
//	int i,temp;
//	cout<<"enter array elements"<<endl;
//	for(i=0;i<10;i++)
//	{
//		cin>>a[i];
//	}
//	int j,min;
//	for(i=0;i<9;i++)
//	{
//		min=i;
//		for(j=i+1;j<10;j++)
//		{
//			if(a[min]>a[j])
//			{
//				min=j;
//			}
//		}
//		if(i!=min)
//		{
//			temp=a[i];
//			a[i]=a[min];
//		a[min]=temp;
//		}
//	}
//	for(i=0;i<10;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	return 0;
//}