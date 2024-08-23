#include <iostream>
using namespace std;
int Largest_Element_of_an_Array(int [],int);
void Sort_Elements_in_ascending(int [],int);
void Sort_Elements_in_descending(int [],int);
void Access_Elements_of_an_Array_Using_Pointer(int [],int);
int main()
{
	int a[5];
	int largest;
	int n;
	n=5;
	for(int i=0;i<n;i++)
		cin >> a[i];

	n=sizeof(a)/sizeof(a[0]);
	largest=Largest_Element_of_an_Array(a,n);
	cout<<"The Greatest Value "<<largest<<endl;
	Sort_Elements_in_ascending(a,n);
	cout<<"Sorting in Ascending order "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	Sort_Elements_in_descending(a,n);
	cout<<endl<<"Sorting in Descending order "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	Access_Elements_of_an_Array_Using_Pointer(a,n);
	return 0;
}
int Largest_Element_of_an_Array(int a[],int n)
{
	int ele;
	ele = a[0];
	for(int i=1;i<5;i++){
		if(ele  < a[i]){
			ele = a[i];
		}
	}
	return ele;
}
void Sort_Elements_in_ascending(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j]=temp;
			}
		}

	}
}
void Sort_Elements_in_descending(int a[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j]=temp;
			}
		}
	}
}
void Access_Elements_of_an_Array_Using_Pointer(int a[],int n)
{
	cout<<"Access_Elements_of_an_Array_Using_Pointer"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<*(a+i)<<" ";
	}
	cout<<endl;
}