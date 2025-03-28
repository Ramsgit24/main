#include<iostream>
using namespace std;

class base
{
public:
	template<typename T>
	T add(T a,T b)
	{
		T c;
		c=a+b;
		return c;
	}
};
int main()
{
	base baseobj;
	int c=baseobj.add<int>(10,20);
	float d=baseobj.add<float>(23.4f,24.5f);
	cout<<c<<endl;
	cout<<d<<endl;
}

#include<iostream>
using namespace std;

template<typename d>
	void pro(d a,d b)
	{
		cout<<a+b<<endl;
	}

int main()
{
	pro<int>(10,30);
	pro<string>("manoj","kumar");

}