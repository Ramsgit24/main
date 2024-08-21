//#include<iostream>
//using namespace std;
//void binary(int ,int);
//void octal(int ,int);
//void hexadecimal(int,int);
//int main()
//{
//	int n,ch;
//	cout<<"enter the decimal number:"<<endl;
//	cin>>n;
//	cout<<"enter 1 to convert binary, 2 to convert to octal number and 3 to covert hexadecimal"<<endl;
//	cout<<"enter your choice:";
//	cin>>ch;
//	switch(ch)
//	{
//	case 1:
//		{
//			cout<<"Binary number of given number is:"<<endl;
//			binary(n,2);
//			break;
//		}
//	case 2:
//		{
//			cout<<"octal number of given number is:"<<endl;
//			octal(n,8);
//			break;
//		}
//	case 3:
//		{
//			cout<<"hexadecimal form of given number is "<<endl;
//			hexadecimal(n,16);
//			break;
//		}
//	}
//	cout<<endl;
//
//}
//void binary(int n,int b)
//{
//	int i,r;
//	int a[32]={0};
//	for(i=31;n!=0;n/=b)
//	{
//		r=n%b;
//		a[i]=r;
//		i--;
//	}
//	for(i=0;i<32;i++)
//	{
//		cout<<a[i];
//	}
//	cout<<endl;
//}
//void octal(int n,int b)
//{
//	int i,r;
//	int a[10]={0};
//	for(i=9;n!=0;n/=b)
//	{
//		r=n%b;
//		a[i]=r;
//		i--;
//	}
//	for(i=0;i<10;i++)
//	{
//		cout<<a[i];
//	}
//	cout<<endl;
//}
//void hexadecimal(int n,int b)
//{
//	int i,r;
//	char a[8]={0};
//	for(i=7;n!=0;n/=b)
//	{
//		r=n%b;
//		if(r>9)
//		{
//			a[i]=r-10+'A';
//		}
//		else
//		{
//		a[i]=r+'0';
//		}
//		i--;
//	}
//	for(i=0;i<8;i++)
//	{
//		cout<<a[i];
//	}
//	cout<<endl;
//}