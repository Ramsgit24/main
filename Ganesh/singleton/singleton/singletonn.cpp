#include<iostream>
using namespace std;
class singleton
{
	singleton()
	{
	}
	static singleton*ptr;
public:
	static singleton* getinstance()
	{
		if(ptr==NULL)
		{
			ptr=new singleton;
		}
		return ptr;
	}
};
singleton*singleton::ptr=NULL;
int main()
{
	singleton* pobj1=singleton::getinstance();
	singleton* pobj2=singleton::getinstance();
	singleton* pobj3=singleton::getinstance();
	cout<<pobj1<<" "<<pobj2<<" "<<pobj3<<endl;
	

}