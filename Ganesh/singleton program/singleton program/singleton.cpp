#include<iostream>
using namespace std;
class singleton
{
protected:
	static singleton* instance;
	int data;
	singleton()
	{}
public:
	static singleton* Instance()
	{
		if(instance==NULL)
		{
			instance=new singleton();
		}
		return instance;  
}
	void setdata(int value)
	{
		data=value;
	}
	int getdata()
	{
		return data;
	}
};
singleton* singleton::instance=NULL;
int main()
{
	singleton::Instance()->setdata(20);
cout<<"data="<<singleton::Instance()->getdata()<<"\n";

return 0;
}
