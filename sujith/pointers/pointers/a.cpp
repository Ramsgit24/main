#include<iostream>
using namespace std;
int ur_strcmp(const char[],const char[]);
void main()
{
	char a[]="ram";
	char b[]="ram";
	int x=ur_strcmp(a,b);
}
int ur_strcmp(const char a[],const char b[])
{
	int i=0,s=0;
	while((a[i]!='\0')||(b[i]!='\0'))
	{
		if(a[i]!=b[i])
		{
			s=1;
			break;
		}
		i++;
	}
	return s;
}