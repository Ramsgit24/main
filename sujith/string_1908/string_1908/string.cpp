#include<iostream>
using namespace std;
int ur_strcomp(char[],char[]);
void ur_strcat(char[],char[]);
void ur_strrev(char[]);
int main()
{
	char d[20]="Sujith";
	char s[]="Kumar";
	cout<<&d<<":"<<&s<<endl;
	ur_strcat(d,s);
	char a[]="sujith";
	char b[]="sujithr";
	int x=ur_strcomp(a,b);
	if(x==0)
		cout<<a<<" and "<<b<<" are same"<<endl;
	else
		cout<<a<<" and "<<b<<" are not same"<<endl;
	/*char c[]="raghu";
	ur_strrev(c);*/
}
void ur_strcat(char a[],char b[])
{
	int i=0;
	int j=0;
	cout<<&a<<":"<<&b<<endl;
	while(a[i]!='\0')
	{
		i++;
	}
	while(b[j]!='\0')
	{
		a[i]=b[j];
		j++;
		i++;
	}
	a[i]='\0';
	cout<<a<<endl;
}
int ur_strcomp(char a[],char b[])
{
	int i=0;
	int j=0;
	while(a[i]!=0)
	{
		i++;
	}
	while(b[j]!=0)
	{
		j++;
	}
	if(i!=j)
	{
		return 1;
	}
	else
	{
		i=0;
		j=0;
		while(a[i]!=0)
		{
			if(a[i]!=b[j])
			{
				return 1;
			}
			i++;
			j++;
		}
	}
	return 0;
}
void ur_strrev(char a[])
{
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	int n=i;
	char b[20];
	int j=0;

	for(i=n-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	cout<<b<<endl;
}